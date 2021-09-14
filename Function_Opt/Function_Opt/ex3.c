#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 매크로 함수
#define func(x,y)(((x)-(y))*((y)+1))

// 일반 함수
int function1(int x, int y) {
	x = x - y;
	y++;
	x = x * y;
	return x;
}