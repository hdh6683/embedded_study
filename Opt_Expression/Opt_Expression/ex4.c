#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double trigonometric(int a, int b);

void main() {
	int x, y;
	puts("sin은 1, cos는 2를 입력");
	scanf("%d", &x);
	puts("각도를 입력하라. 0, 45, 90");
	scanf("%d", &y);
	printf("\n%f", trigonometric(x, y));
}

double trigonometric(int a, int b) {
	double x;
	int y = 0;
	double sin[] = { 0,0.70710678,1 };
	double cos[] = { 1,0.70710678,0 };
	if (b != 0)
		y = b / 45;
	x = (a == 1) ? sin[y] : cos[y];
	return x;
}