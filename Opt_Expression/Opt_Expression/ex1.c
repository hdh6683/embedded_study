#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int x, y, z, k;
	x = z = 10, y = k = 50;
	y %= 12;
	k &= 11;
	x /= 8;
	z >>= 3;
	printf("z = %d, z = %d, y = %d, k = %d", x, z, y, k);
}