#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c, d, x = 0, t;
	a = b = 3;
	c = 5;
	d = 6;
	t = ((a * c) + b) / d;

	switch (t) {
	case 0:
		x = t + 5;
		break;
	case 1:
		x = t + 10;
		break;
	case 2:
		x = t + 15;
		break;
	case 3:
		x = t + 20;
		break;
	case 4:
		x = t + 25;
		break;
	default:
		x = 0;
	}

	printf("%d\n", x);
}