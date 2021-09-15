#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//Before
	int i, a[100];
	for (i = 0; i < 100; i++) {
		a[i] = i + 1;
	}

	//After
	int i, a[100];
	for (i = 0; i < 100; i += 4) {
		a[i] = i + 1;
		a[i + 1] = i + 2;
		a[i + 2] = i + 3;
		a[i + 3] = i + 4;
	}
}