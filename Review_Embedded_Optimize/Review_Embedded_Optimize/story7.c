#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void add(void* p, void* q, void* s, int op);

int a(int);
int b(int);
int c(int);
int (*times[3])(int) = { a,b,c };

void main(void) {
	printf("예제 7-3 void 포인터의 사용\n");
	int a = 1, b = 2, sum_i;
	float x = 1.5, y = 2.5, sum_f;

	add(&a, &b, &sum_i, 1);
	add(&x, &y, &sum_f, 2);

	printf("int의 합 = %d\n", sum_i);
	printf("float의 합 = %f\n", sum_f);


	printf("\n예제 7-4 malloc의 사용\n");
	int i, * p;
	printf("저장하고자 하는 수의 개수를 입력하시오\n");
	scanf("%d", &i);
	p = (int*)malloc(sizeof(int) * i);
	for (a = 0; a < i; a++)
		p[a] = a;
	for (a = 0; a < i; a++)
		printf("p[%d] = %d\n", a, p[a]);
	free(p);


	printf("\n예제 7-7 함수 포인터의 사용\n");
	int z;
MENU:
	printf("\n메뉴\n1. 제곱\n");
	printf("2. 3제곱\n");
	printf("3. 4제곱\n");
	printf("\n원하는 작동을 선택하시오\n");
	scanf("%d", &i);

	switch (i) {
	case 1:
		printf("4의 제곱은 ");
		break;
	case 2:
		printf("4의 세제곱은 ");
		break;
	case 3:
		printf("4의 네제곱은 ");
		break;
	default:
		printf("메뉴에 없는 숫자입니다.\n");
		goto MENU;
	}

	//	선택한 메뉴에 따라 배열첨자를 이용해 함수 호출
	z = times[i - 1](4);

	printf("%d\n", z);
}

void add(void* p, void* q, void* s, int op) {
	if (op == 1)
	{
		*(int*)s = *(int*)p + *(int*)q;
	}
	else if (op == 2)
	{
		*(float*)s = *(float*)p + *(float*)q;
	}
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