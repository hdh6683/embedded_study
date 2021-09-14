#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1() {
	printf("f1() 호출\n");
	return;
}

void f2() {
	printf("f2() 호출\n");
	return;
}

void f3() {
	printf("f3() 호출\n");
	return;
}

void main() {
	int choose;
	printf("1~3의 숫자 입력 : ");
	scanf("%d", &choose);

	// switch문을 이용한 분기
	switch (choose) {
	case 1:
		f1();
		break;
	case 2:
		f2();
		break;
	case 3:
		f3();
		break;
	}

	void (*p[3])() = { f1,f2,f3 };
	p[choose-1]();
}