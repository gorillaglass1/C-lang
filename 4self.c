#include <stdio.h>

int main(void) {

	int coffee_price = 4500; //커피 가격
	int sandwich_price = 6000; //샌드위치 가격
	int coffee = 0; //커피 개수
	int sandwich = 0; //샌드위치 개수

	printf("커피 & 샌드위치 키오스크\n 메뉴: 커피: 4500원\n 샌드위치: 6000원\n 샌드위치 주문시 모든 커피 1000원 할인\n ");
	printf("커피 몇 개를 주문하시겠습니까?\n");
	scanf_s("%d", &coffee);
	printf("샌드위치 몇 개를 주문하기겠습니까?\n");
	scanf_s("%d", &sandwich);

	if (sandwich > 0) {
		coffee_price -= 1000;
		int total = (sandwich * sandwich_price) + (coffee * coffee_price);
		printf("합계:  %d원 입니다", total);
	}
	else {
		int total = (sandwich * sandwich_price) + (coffee * coffee_price);
		printf("합계:  %d원 입니다", total);
	} //printf("합계:  %d원 입니다", total);
	return 0;
}