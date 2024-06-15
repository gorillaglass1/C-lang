#include <stdio.h>

void function_without_return();
int function_without_return();
void function_without_parameter();
int apple(int total, int ate);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul (int num1, int num2);
int div(int num1, int num2);
void p(int num);

int main(void) {
	int ret;
	ret = apple(5, 2);
	printf("사과 5개중에서 2개를 먹으면 %d개가 남습니다.\n", ret);
	printf("사과 %d개중에서 %d개를 먹으면 %d개가 남습니다.\n", 5, 2, apple(5, 2));
	int num = 2;
	p(num);
	num = add(num, 3);
	p(num);
	num = sub(num, 1);
	p(num);
	num = mul(num, 3);
	p(num);
	num = div(num, 6);
	p(num);
	return 0;
}

void p(int num) {
	printf("num은 %d입니다.\n", num);
}
int function_without_return() {
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}
void function_without_return() {
	printf("반환값이 없는 함수입니다. \n");
}
void function_without_parameter() {
	printf("전달값이 없는 함수입니다.\n");
}
void function_with_parameters(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달값은 %d, %d, %d입니다.\n", num1, num2, num3);
}
int apple(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}
int add(int num1, int num2) {
	return num1 + num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
int div(int num1, int num2) {
	return num1 / num2;
}