#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int x);
int f1[] = { 1,1,2,6,24,120,720,5040,40320 };
int f2[] = { 1,1,2,3,5,8,13,21,34 };

void main() {
	int x;
	printf("0~8의 숫자를 입력하세요 : ");
	scanf("%d", &x);

	// factorial
	printf("%d 팩토리얼은 %d\n", x, fact(x));
	printf("피보나치 수열의 %d번째 항은 %d\n", x, fibo(x));
}

int fact(int x) {
	return f1[x];
}

int fibo(int x) {
	return f2[x];
}