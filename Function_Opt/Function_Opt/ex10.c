#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int foo1(int a, int b, int c, int d) {	// ���� 4���� �������Ϳ� ����ȴ�
	return a + b + c + d;
}
int foo2(int a, int b, int c, int d, int e, int f) {	// ���� 6���� 4���� ��������, 2���� ���ÿ� ����ȴ�
	return a + b + c + d + e + f;
}

void main() {
	int x, y;
	x = foo1(1, 2, 3, 4);
	y = foo2(1, 2, 3, 4, 5, 6);
}