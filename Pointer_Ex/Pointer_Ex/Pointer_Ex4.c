#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int a, i, * p;
	printf("�����ϰ��� �ϴ� ���� ������ �Է��Ͻÿ�\n");
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