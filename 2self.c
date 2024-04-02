#include <stdio.h>

int main(void) {
	//이름
	char name[256];
	printf("이름이 뭐예요? : ");
	scanf_s("%s", name, (unsigned int)sizeof(name));

	//아이디
	char ID[256];
	printf("아이디를 적어주세요 : ");
	scanf_s("%s", ID, (unsigned int)sizeof(ID));

	//나이
	int age;
	printf("나이는 몇 살이신가요? : ");
	scanf_s("%d", &age);

	//생일(주민번호 앞자리)
	char birthday[256];
	printf("주민등록번호 앞자리를 적어주세요 : ");
	scanf_s("%s", birthday, (unsigned int)sizeof(birthday));

	//신발 크기
	float shoessize;
	printf("본인의 신발 사이즈는 몇 mm인가요? : ");
	scanf_s("%f MM", &shoessize);

	//회원정보 출력
	printf("\n\n--- 회원정보 ---\n\n");
	printf("이름: %s\n", name);
	printf("아이디: %s\n", ID);
	printf("나이: %d\n", age);
	printf("주민등록번호 앞자리: %s\n", birthday);
	printf("신발 사이즈: %.1f\n", shoessize);


	return 0;
}