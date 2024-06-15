#include <stdio.h>

void convert_time(int mtime);

int main(void) {
	int rtime;
	printf("보고싶은 영화의 상영시간을 분으로 입력해주세요.");
	scanf_s("%d", &rtime);
	convert_time(rtime);
	return 0;
}

void convert_time(int mtime) {
	int hour, minute;
	hour = mtime / 60;
	minute = mtime % 60;
	printf("%d시간 %d분\n", hour, minute);
}