//값에 의한 호출
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f1(struct Test x);

struct Test {
	int a;
	float b;
	char c;
};

void main() {
	struct Test t1;
	t1.a = 3;
	t1.b = 5.5;
	t1.c = 'x';
	f1(t1);
}

void f1(struct Test x) {
	printf("%d, %f, %c\n", x.a, x.b, x.c);
}