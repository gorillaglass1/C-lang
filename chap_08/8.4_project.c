#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayAnimal [4][5];
char* strAnimal[10];
int checkAnimal[4][5];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int convPosX(int x);
int convPosY(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL));
    initAnimalArray();
    initAnimalName();
    shuffleAnimal();
    int failCount = 0;

    while (1)
    {
        int select1, select2 = 0;
        printf("\n뒤집을 카드 2장을 고르세요.(예: 12 4) => ");
        scanf("%d %d", &select1, &select2);
        if(select1 == select2)
            continue;

        int firstSelectX = convPosX(select1);
        int firstSelectY = convPosY(select1);
        int secondSelectX = convPosX(select2);
        int secondSelectY = convPosY(select2);

        if((checkAnimal[firstSelectX][firstSelectY] == checkAnimal[secondSelectX][secondSelectY] == 0)
        && (arrayAnimal[firstSelectX][firstSelectY] == arrayAnimal[secondSelectX][secondSelectY]))
            {
                printf("\n\n빙고! %s발견\n\n", strAnimal[arrayAnimal[firstSelectX][firstSelectY]]);
                checkAnimal[firstSelectX][firstSelectY], checkAnimal[secondSelectX][secondSelectY] = 1;
            }
        else 
            {
                printf("\n\n땡! 서로 다른 동물 카드거나 이미 뒤집힌 카드입니다.\n");
                printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelectX][firstSelectY]]);
                printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelectX][secondSelectY]]);
                failCount++;
            }

        if(foundAllAnimals == 1) {
            printf("\n\n축하합니다.! 모든 동물을 찾았습니다.\n");
            printf("총 %d번 실패했습니다.\n", failCount);
            break;
        }
    }
    

    return 0;
}


void initAnimalArray() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName() {
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";
    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

void shuffleAnimal() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 2; j++) {
            int pos = getEmptyPosition();
            int x = convPosX(pos);
            int y = convPosX(pos);
            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition() {
    while(1)
    {
        int randPos = rand()%20;
        int x = convPosX(randPos);
        int y = convPosX(randPos);
        if(arrayAnimal[x][y] == -1)
            return randPos;
    }
    return 0;
}

int convPosX(int x) {
    return x / 5;
}

int convPosY(int y) {
    return y % 5;
}

void printAnimals() {
    printf("\n======== 동물 위치를 보여 줍니다. ========\n");
    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            printf("&8s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n========================================\n");
}

void printfQuestion() {
    printf("\n=================문제====================\n");
    int seq = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++,seq++) {
            if(checkAnimal[i][j] != 0)
                printf("%d", strAnimal[arrayAnimal[i][j]]);
            else
                printf("%8d", seq);
        }
    }printf("\n");
}

int foundAllAnimals() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) {
            if(checkAnimal[i][j] == 0)
                return 0; 
        }
    }
    return 1;
}