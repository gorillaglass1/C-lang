#include <stdio.h>

int main(void) {
	for (int i = 0; i < 128; i++) {
		printf("아스키코드 값 %d : %c\n", i, i);
	}
	
	/*char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]);
	}
	
	/*char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", (int) sizeof(kor));
 	
	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", (int)sizeof(str));
	
	/*int subway_array[3];
	subway_array[0] = 30; //[30]
	subway_array[1] = 40; //[30] [40]
	subway_array[2] = 50; //[30] [40] [50]
	for (int i = 0; i < 3; i++) {
		printf("전동차 %d호차에 승객 %d명이 타고있습니다\n", i + 1, subway_array[i]);
	}

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}*/
	return 0;
}