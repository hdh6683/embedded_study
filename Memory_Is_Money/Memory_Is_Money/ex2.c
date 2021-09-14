#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

struct Test {
	char str[50];
	int x, y, z;
	double k;
};

void printValue1(struct Test* s);
void printValue2(struct Test s);

void main() {
	unsigned int start;
	unsigned int end;
	int i;
	struct Test t1;
	t1.x = 10;

	start = GetTickCount64();
	for (i = 0; i < 10000; i++) {
		printValue1(&t1);
	}
	end = GetTickCount64();
	printf("%ums\n", end - start);

	start = GetTickCount64();
	for (i = 0; i < 10000; i++) {
		printValue2(t1);
	}
	end = GetTickCount64();
	printf("%ums\n", end - start);
}

void printValue1(struct Test* s) {
	printf("%d", s->x);
}

void printValue2(struct Test s) {
	printf("%d", s.x);
}