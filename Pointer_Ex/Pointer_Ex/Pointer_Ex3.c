#include <stdio.h>

// 여러 타입의 데이터를 입력받기 위해 인자의 형을 void 포인터로 지정
void add(void* p, void* q, void* s, int op);

void main(void) {
	int a = 1, b = 2, sum_i;
	float x = 1.5, y = 2.5, sum_f;

	add(&a, &b, &sum_i, 1);
	add(&x, &y, &sum_f, 2);

	printf("int의 합 = %d\n", sum_i);
	printf("float의 합 = %f\n", sum_f);
}

void add(void* p, void* q, void* s, int op) {
	if (op == 1)
		*(int*)s = *(int*)p + *(int*)q;
	else if (op == 2)
		*(float*)s = *(float*)p + *(float*)q; // void 포인터는 연산 시 캐스팅
}