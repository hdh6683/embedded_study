#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test(char* str);
void main(void) {
	void (*p)(char*);
	char a[] = "함수 포인터 테스트";
	p = test;
	p(a);
}

void test(char* str) {
	printf("\n%s\n", str);
}