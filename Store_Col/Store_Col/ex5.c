#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union Test {
	int x;
	char y[4];
};

void main() {
	char buf[4];
	int i;
	union Test t1;
	t1.x = 10;
	for (i = 3; i >= 0; i--)
		buf[3 - i] = t1.y[i];
	send(buf);
}