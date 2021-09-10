// 참조에 의한 호출
#include <stdio.h>
void f1(struct Test* x);

struct Test {
	int a;
	float b;
	char c;
};

void main() {
	struct Test t1, * p;
	p = &t1;
	t1.a = 3;
	t1.b = 5.5;
	t1.c = 'x';
	f1(p);
}

void f1(const struct Test* x) {
	printf("%d, %f, %c\n", x->a, x->b, x->c);
}