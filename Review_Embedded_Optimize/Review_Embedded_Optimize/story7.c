#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void add(void* p, void* q, void* s, int op);

int a(int);
int b(int);
int c(int);
int (*times[3])(int) = { a,b,c };

void main(void) {
	printf("���� 7-3 void �������� ���\n");
	int a = 1, b = 2, sum_i;
	float x = 1.5, y = 2.5, sum_f;

	add(&a, &b, &sum_i, 1);
	add(&x, &y, &sum_f, 2);

	printf("int�� �� = %d\n", sum_i);
	printf("float�� �� = %f\n", sum_f);


	printf("\n���� 7-4 malloc�� ���\n");
	int i, * p;
	printf("�����ϰ��� �ϴ� ���� ������ �Է��Ͻÿ�\n");
	scanf("%d", &i);
	p = (int*)malloc(sizeof(int) * i);
	for (a = 0; a < i; a++)
		p[a] = a;
	for (a = 0; a < i; a++)
		printf("p[%d] = %d\n", a, p[a]);
	free(p);


	printf("\n���� 7-7 �Լ� �������� ���\n");
	int z;
MENU:
	printf("\n�޴�\n1. ����\n");
	printf("2. 3����\n");
	printf("3. 4����\n");
	printf("\n���ϴ� �۵��� �����Ͻÿ�\n");
	scanf("%d", &i);

	switch (i) {
	case 1:
		printf("4�� ������ ");
		break;
	case 2:
		printf("4�� �������� ");
		break;
	case 3:
		printf("4�� �������� ");
		break;
	default:
		printf("�޴��� ���� �����Դϴ�.\n");
		goto MENU;
	}

	//	������ �޴��� ���� �迭÷�ڸ� �̿��� �Լ� ȣ��
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