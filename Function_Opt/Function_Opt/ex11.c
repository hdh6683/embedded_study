#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char foo1(char a) { // 마스킹 과정이 추가된다
	return a + 3;
}

int foo2(int a) {
	return a + 3;
}

void main() {
	char x;
	int y;
	x = foo1(5);
	y = foo2(5);
}