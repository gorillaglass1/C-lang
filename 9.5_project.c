#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char* name;
    int age;
    char* character;
    int level;
} CAT;

CAT cats[5];

int collection[5] = {0, 0, 0, 0, 0};

void initCats();

int printCats(int selectedCat);

int checkCollection();

int main(void) {
    srand(time(NULL));
    initCats();
    while (1) 
    {
        printf("두근두근! 어느 고양이의 집사가 될까요?\nEnter를 눌러 확인하세요!");
        (void)getchar();
        int selected = rand() %5;
        printCats(selected);
        collection[selected] = 1;
        int collecAll = checkCollection();
        if(collecAll == 1)
            break;
    }
    return 0;
}

void initCats() {
    cats[0].name = "깜냥이";
    cats[0].age = 5;
    cats[0].character = "온순함";
    cats[0].level = 1;
    cats[1].name = "귀요미";
    cats[1].age = 3;
    cats[1].character = "까칠함";
    cats[1].level = 2;
    cats[2].name = "수줍이";
    cats[2].age = 7;
    cats[2].character = "잠이 많음";
    cats[2].level = 3;
    cats[3].name = "까꿍이";
    cats[3].age = 2;
    cats[3].character = "시끄러움";
    cats[3].level = 4;
    cats[4].name = "돼냥이";
    cats[4].age = 1;
    cats[4].character = "늘 배고픔";
    cats[4].level = 5;
}

int printCats(int selectedCat) {
    printf("\n\n=== 당신은 다음 고양이의 집사가 됐어요! ===\n\n");
    printf("이름 : %s\n", cats[selectedCat].name);
    printf("나이 : %d\n", cats[selectedCat].age);
    printf("특징 : %s\n", cats[selectedCat].character);
    printf("레벨 : ");
    for(int i = 0; i < cats[selectedCat].level; i++) {
        printf("★");
    }
    printf("\n\n");
}

int checkCollection() {
    int collectAll = 1;
    printf("\n\n=== 보유한 고양이 목록이에요. ===\n\n");
    for(int i = 0; i < 5; i++) {
        if(collection[i] == 0) {
            printf("%10s", "(빈 상자)");
            collectAll = 0;
        }
        else 
            printf("%10s", cats[i].name);
    }
    printf("\n===================================\n\n");
    if(collectAll) 
        printf("\n\n축하합니다! 고양이 5마리를 모두 모았어요. 열심히 키워 주세요.\n\n");
    return collectAll;
}