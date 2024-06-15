#include <stdio.h>

int main(void) {
	int scores[5] = { 76, 84, 80, 92, 96 };
	int sum = 0;
	float average;
	
	for (int i = 0; i < 5; i++) {
		sum += scores[i];
	}
	average = sum / 5.0f;
	printf("총점은 %d점, 평균은 %.1f점입니다.\n", sum, average);
	return 0;
}