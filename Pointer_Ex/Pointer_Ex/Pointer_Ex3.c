#include <stdio.h>

// ���� Ÿ���� �����͸� �Է¹ޱ� ���� ������ ���� void �����ͷ� ����
void add(void* p, void* q, void* s, int op);

void main(void) {
	int a = 1, b = 2, sum_i;
	float x = 1.5, y = 2.5, sum_f;

	add(&a, &b, &sum_i, 1);
	add(&x, &y, &sum_f, 2);

	printf("int�� �� = %d\n", sum_i);
	printf("float�� �� = %f\n", sum_f);
}

void add(void* p, void* q, void* s, int op) {
	if (op == 1)
		*(int*)s = *(int*)p + *(int*)q;
	else if (op == 2)
		*(float*)s = *(float*)p + *(float*)q; // void �����ʹ� ���� �� ĳ����
}