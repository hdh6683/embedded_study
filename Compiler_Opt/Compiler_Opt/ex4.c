#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b = 0;
	scanf("%d", &a);
	if (a < 0 && a>0)	// ������ �� ���� ����, ���� �ڵ�
		b = 10;
	printf("%d\n", b);
}