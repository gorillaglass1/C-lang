#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	printf("정답: %d\n", num);
	int answer;
	answer = 0;
	int chance;
	chance = 5;



	while (1) {
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞혀 보세요.(1~100) :  ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("Down ↓\n\n");
		}
		else if (answer < num) {
			printf("Up ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다.!! \n\n");
			break;
		}
		else {
			printf("알수 없는 오류가 발생했습니다.");
		}
		if (chance == 0) {
			printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다.\n\n");
			printf("정답: %d\n", num);
			break;
		}
	}
	return 0;
}