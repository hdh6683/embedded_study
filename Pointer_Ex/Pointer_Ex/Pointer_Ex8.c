#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a(int);
int b(int);
int c(int);
int (*p[3])(int) = { a,b,c };

void main(void) {
	int x, y, z = 0, i;
	printf("\n�޴�\n1.����\n");
	printf("2. 3����\n");
	printf("3. 4����\n");
	printf("\n���ϴ� �۵��� �����Ͻÿ�\n");
	scanf("%d", &i);

	z = p[i - 1](4);

	printf("%d\n", z);
}

int a(int k) {
	return k * k;
}

int b(int k) {
	return k * k * k;
}

int c(int k) {
	return k * k * k * k;
}