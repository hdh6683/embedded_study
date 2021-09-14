#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c, d, x = 0, t;
	a = b = 3;
	c = 5;
	d = 6;
	t = ((a * c) + b) / d;
	if (t == 0)
		x = t + 5;
	else if (t == 1)
		x = t + 10;
	else if (t == 2)
		x = t + 15;
	else if (t == 3)
		x = t + 20;
	else if (t == 4)
		x = t + 25;
	else
		x = 0;
	printf("%d\n", x);
}