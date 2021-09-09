#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a(int);
int b(int);
int c(int);

void main(void) {
	int x, y, z = 0, i;
	printf("\n메뉴\n1.제곱\n");
	printf("2. 3제곱\n");
	printf("3. 4제곱\n");
	printf("\n원하는 작동을 선택하시오\n");
	scanf("%d", &i);

	switch (i) {
	case 1:
		z = a(4);
		break;
	case 2:
		z = b(4);
		break;
	case 3:
		z = c(4);
		break;
	}
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