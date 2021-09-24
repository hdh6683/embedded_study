#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b = 0;
	scanf("%d", &a);
	if (a < 0 && a>0)	// 도달할 수 없는 조건, 데드 코드
		b = 10;
	printf("%d\n", b);
}