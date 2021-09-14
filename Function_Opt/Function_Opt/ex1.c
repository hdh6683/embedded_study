#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MUL(x,y)((x)*(y))

void main() {
	int i, k = 0;
	for (i = 0; i < 10; i++)
		k += MUL(k, i);
}