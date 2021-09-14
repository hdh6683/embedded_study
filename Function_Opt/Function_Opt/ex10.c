#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int foo1(int a, int b, int c, int d) {	// 인자 4개라서 레지스터에 저장된다
	return a + b + c + d;
}
int foo2(int a, int b, int c, int d, int e, int f) {	// 인자 6개라서 4개는 레지스터, 2개는 스택에 저장된다
	return a + b + c + d + e + f;
}

void main() {
	int x, y;
	x = foo1(1, 2, 3, 4);
	y = foo2(1, 2, 3, 4, 5, 6);
}