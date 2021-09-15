#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main() {
	unsigned char flag;
	int search, i;
	int a[10000];
	for (i = 0; i < 10000; i++) {
		a[i] = i;
	}

	// Before
	flag = FALSE;
	search = 55;
	for (i = 0; i < 10000; i++) {
		if (a[i] == search)
			flag = TRUE;
	}
	if (flag)
		printf("found");
	else
		printf("not found");

	// After
	flag = FALSE;
	search = 55;
	for (i = 0; i < 10000; i++) {
		if (a[i] == search) {
			flag = TRUE;
			break;
		}
	}
	if (flag)
		printf("found");
	else
		printf("not found");
}