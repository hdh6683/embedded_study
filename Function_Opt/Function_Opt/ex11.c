#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char foo1(char a) { // ����ŷ ������ �߰��ȴ�
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