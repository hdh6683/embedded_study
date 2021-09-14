#include <stdio.h>
void main() {
	int i, a[5] = { 1,2,3,4,5 };
	int* p = a;
	for (i = 0; i < 10; i++)
		printf("%d\t", p[i]);
}