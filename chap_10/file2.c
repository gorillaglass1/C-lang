#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#define MAX 10000

int main(void) {
    char line[MAX];
    FILE * file = fopen("c:\\Users\\hjseo\\Documents\\C\\chap_10\\assets\\test1.txt", "rb");
    if (file == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }
    while (fgets(line, MAX, file) != NULL)
    {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}