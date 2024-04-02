#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level;
int arrayFish[6]; 
void initData();
void printfFishes();
void decreseWater(long elapsedTime);
int* cursor;
int checkFishAlive();

int main(void) {
	long startTime = 0;
	long totalElapsedTime = 0; //총 경과시간 표시
	long prevElapsedTime = 0;
	int num;
	initData(); // 게임 초기화
	startTime = clock();
	cursor = arrayFish;
	
	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 줄까요? (1~6)");
		scanf_s("%d", &num);
		if (num < 1 || num >6) {
			printf("\n입력값이 잘못됐습니다.\n");
			continue;
		}
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과시간: %ld\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과시간: %ld\n", prevElapsedTime);
		decreseWater(prevElapsedTime);
		if (cursor[num - 1] < 0 || cursor[num - 1] == 0) {
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		else if ((cursor[num - 1] + 1) <= 100) {
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; //물을 주는 양
		}
		if ((level - 1) < (totalElapsedTime / 20)) {
			level++; 
			printf("*** 축하합니다.  레벨이 %d에서 %d로 올랐습니다.   ***\n\n", level - 1, level);
		}
		if (level == 5) {
			printf("\n\n 축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
			exit(0);
		}
		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다. ㅠㅠ\n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있어요!\n\n");
		}
		prevElapsedTime = totalElapsedTime;
	}
	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d  ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); //증발 속도 조절
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1;
		}
	}
	return 0;
}