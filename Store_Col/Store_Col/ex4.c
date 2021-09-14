#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//before
struct Test1 {
	char a;
	int b;
	char c;
	int d;
};

//after
struct Test2 {
	char a;
	char c;
	int b;
	int d;
};

void main() {
	printf("%d\n", sizeof(struct Test1));
	printf("%d\n", sizeof(struct Test2));
}