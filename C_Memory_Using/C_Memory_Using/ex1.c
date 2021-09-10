#include <stdio.h>
int* func3(int* x);
void main(void) {
	int* a, i;
	int b[] = { 1,2,3,4,5,6,7,8,9,10 };
	a = func3(b);
	printf("배열의 요소는 \n");
	for (i = 0; i < 10; i++)
		printf("%d\t", b[i]);
	printf("이고,\n합은 %d이다. ", *a);
}

int* func3(int* x) {
	int i;
	static int sum = 0;
	for (i = 0; i < 10; i++)
		sum += x[i];
	return &sum;
}