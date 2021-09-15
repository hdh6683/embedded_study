#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1();
void f2();
void f3();
void f4();
void test(unsigned int a);
void (*fp[4])() = { f1,f2,f3,f4 };

void main(void) {
	while (1) {
		int a;
		printf("1~4 중의 숫자를 하나 입력하세요 : ");
		scanf("%d", &a);
		if (!a)
			break;
		test(a);
	}
}

void test(unsigned int a) {
	fp[a - 1]();
}

void f1() {
	printf("f1() called\n");
}

void f2() {
	printf("f2() called\n");
}

void f3() {
	printf("f3() called\n");
}

void f4() {
	printf("f4() called\n");
}