#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int a, i, * p;
	printf("저장하고자 하는 수의 개수를 입력하시오\n");
	scanf("%d", &i);
	p = (int*)malloc(sizeof(int) * i);
	for (a = 0; a < i; a++) {
		p[a] = a;
	}
	for (a = 0; a < i; a++) {
		printf("p[%d] = %d\n", a, p[a]);
	}
	free(p);
}