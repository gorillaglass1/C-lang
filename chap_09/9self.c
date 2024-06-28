#include <stdio.h>

typedef struct Book {
    int id;
    char *title;
    int available;
} book;

void printBookList(book *list);

int main() {
    int control = 0;
    book bookList[4] = {
        {1, "C 입문편", 0},
        {2, "Python 기본편", 1},
        {3, "Java 기본편", 0},
        {4, "Python 중급편", 1}
    };

    while(control != -2) {
       printBookList(&bookList);
       printf("도서 번호를 입력하세요(서비스 종료 : -1) : ");
       scanf("%d", &control);
       control--;
       if (bookList[control].available == 0) {
            printf("\n%-16s 도서 반납 완료되었습니다.\n\n", bookList[control].title);
            bookList[control].available = 1;
       } else if(bookList[control].available == 1) {
            printf("\n%-16s 도서 대출 완료되었습니다.\n\n", bookList[control].title);
            bookList[control].available = 0;
       }
    }
    
    return 0;
}

void printBookList(book *list) {
    for (int i = 0; i < 4; i++) {
        printf("%-3d", (list + i) -> id);
        printf("%-16s", (list + i) -> title);
        if ((list + i) ->available == 0)
            printf("  대출 중");
            else 
                printf("  대출 가능");
        printf("\n");
    }
}