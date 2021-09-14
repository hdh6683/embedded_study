#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(int digit) {
	printf("LED ");
	(digit & 0x4) ? (printf("1")) : (printf("0"));
	(digit & 0x2) ? (printf("1")) : (printf("0"));
	(digit & 0x1) ? (printf("1")) : (printf("0"));
	printf("켜짐\n");
	return;
}

void main() {
	int i, j;
	for (i = 0; i < 8; i++) {
		display(i);
		for (j = 0; j < 1000000000; j++);
		printf("LED 꺼짐\n");
	}
}