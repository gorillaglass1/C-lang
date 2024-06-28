#include <stdio.h>
#include <string.h>

int main() {
    char *str1;
    char *str2;
    char *answer;

    FILE *file = fopen("c:\\Users\\hjseo\\Documents\\C\\chap_10\\assets\\word.txt", "rb");

    if (file == NULL) {
        printf("파일에서 문제가 발생하였습니다.");
        return 1;
    }


    for(int i = 0; i < 3; i++) {
        (void)fscanf(file, "%s %s", str1, str2);
    
        printf("\'%s\'(이)라는 뜻을 가진 영어 단어는?", str2);
        scanf("%s", answer);
        
        if (strcmp(answer, str1) == 0)
            printf("%s, 정답입니다.", answer);
        else {
            printf("%s, 오답입니다.", answer);
            printf("\'%s\'(이)라는 뜻을 가진 영어 단어는 \"%s\"입니다.", str2, str1);
        }
    }

    fclose(file);
    return 0;
}