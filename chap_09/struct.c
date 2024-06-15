#include <stdio.h>

struct GameInfo{
        char* name;
        int year;
        int price;
        char* company;
        struct GameInfo * friendGame;
    };

int main(void) {

    struct GameInfo gameInfo2 = {"너도게임", 2022, 100, "너도회사"};
    printf("\n-- 또 다른 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameInfo2.name);
    printf("발매 연도 : %d\n", gameInfo2.year);
    printf("게임 가격 : %d원\n", gameInfo2.price);
    printf("제작 회사 : %s\n", gameInfo2.company);
    printf("\n");

    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2022;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";
    gameInfo1.friendGame = &gameInfo2;

    printf("-- 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameInfo1.name);
    printf("발매 연도 : %d\n", gameInfo1.year);
    printf("게임 가격 : %d원\n", gameInfo1.price);
    printf("제작 회사 : %s\n", gameInfo1.company);

    printf("\n-- 다른 회사의 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameInfo1.friendGame->name);
    printf("발매 연도 : %d\n", gameInfo1.friendGame->year);
    printf("게임 가격 : %d원\n", gameInfo1.friendGame->price);
    printf("제작 회사 : %s\n", gameInfo1.friendGame->company);
    printf("\n");

    struct GameInfo gameArray[2] = {
        {"나도게임", 2022, 50, "나도회사"},
        {"너도게임", 2022, 100, "너도회사"}
    };
    
    for(int i = 0; i < 2; i++) {
    printf("-- 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameArray[i].name);
    printf("발매 연도 : %d\n", gameArray[i].year);
    printf("게임 가격 : %d원\n", gameArray[i].price);
    printf("제작 회사 : %s\n", gameArray[i].company);
    printf("\n");
    }


    struct GameInfo* gamePtr;
    gamePtr = &gameInfo1;
    printf("-- 미션맨의 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", (*gamePtr).name);
    printf("발매 연도 : %d\n", (*gamePtr).year);
    printf("게임 가격 : %d원\n", (*gamePtr).price);
    printf("제작 회사 : %s\n", (*gamePtr).company);
    printf("\n");

    printf("-- 미션맨의 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gamePtr->name);
    printf("발매 연도 : %d\n", gamePtr->year);
    printf("게임 가격 : %d원\n", gamePtr->price);
    printf("제작 회사 : %s\n", gamePtr->company);
    printf("\n");
    return 0;
}