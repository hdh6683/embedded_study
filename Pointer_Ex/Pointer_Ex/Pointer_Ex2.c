#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void error_print(int x);
void main(void) {
	int a, i;
	char b[3][10] = { "test1","test2","test3" };
	char* p = "%s\n";
	for (i = 0; i < 3; i++)
		printf(p, b[i]);
	printf(p, "1~4 사이의 숫자를 입력하시오");
	scanf("%d", &a);
	error_print(a);
}

void error_print(int x) {
	char* a[5] = { "error number : %s\n","200","300","400","500" };
	printf(a[0], a[x]);
}