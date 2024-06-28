#include <stdio.h>

int main() {
    int control;
    char *printlist;
    char *list[3][4] = {
        {"1. 우유", "2. 커피", "3. 주스", "4. 탄산음료"},
        {"5. 칸칩", "6. 거북칩", "7. 감자칩", "8. 고구마칩"},
        {"9. 안타볼", "10. 초코버섯", "11. 가재깡", "12. 씨리얼"}
    };

    printf("전체 상품 목록입니다.\n");
    printf("=======================\n");
    for (int i = 0; i < sizeof(list)/sizeof(list[0]); i++) {
        for(int j = 0; j < sizeof(list[0])/sizeof(list[0][0]); j++)
            printf("%-12s", list[i][j]);
        printf("\n");
    }
    printf("=======================\n");


    printf("몇 번 상품을 구매하시겠습니까?(1 ~ 12)");
    scanf("%d", &control);
    if (0 < control && control <= 12) {
        control--;
        printlist = list[control / 4][control % 4];

        printf("\n구매하신 상품은 %s입니다.\n", printlist);
        printf("이용해 주셔서 감사합니다.\n");
    } else {
        printf("\n상품 번호를 잘못 입력했습니다. 프로그램을 종료합니다.\n");
    }
    
    return 0;
}