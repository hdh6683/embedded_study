#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test(char* str);
void main(void) {
	void (*p)(char*);
	char a[] = "�Լ� ������ �׽�Ʈ";
	p = test;
	p(a);
}

void test(char* str) {
	printf("\n%s\n", str);
}