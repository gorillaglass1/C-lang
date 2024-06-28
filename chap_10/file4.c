#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#define MAX 10000

int main(void) {
    char str1[MAX];
    char str2[MAX];
    int num[6] = {0};
    int bonus = 0;
    FILE * file = fopen("c:\\Users\\user\\Documents\\C\\chap_10\\assets\\test2.txt", "rb");
    if (file == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    
    fscanf(file, "%s %d %d %d %d %d %d", str1, num, num + 1, num + 2, num + 3, num + 4, num + 5);
    printf("%s : ", str1);
    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
        printf("%d ", num[i]);
    printf("\n");
    fscanf(file, "%s %d", str2, &bonus);
    printf("%s : ", str2);
    printf("%d", bonus);
    fclose(file);
    return 0;
}
