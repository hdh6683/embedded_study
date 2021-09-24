#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int i, j;
	int* p = a[0], (*q)[3] = a;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("аж╪р = %x a[%d][%d] = %d\n", *(a + i) + j, i, j, *(*(a + i) + j));
		}
	}
	printf("a[1][-1] = %d\n", a[1][-1]);
	printf("p[5]=%d q[1][1] = %d\n", p[5], q[1][1]);
	printf("a[0] = %x a = %x &a = %x\n", a[0], a, &a);
	printf("a[0] + 1 = %x a + 1 = %x &a + 1 = %x\n", a[0] + 1, a + 1, &a + 1);
}