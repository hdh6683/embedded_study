#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ũ�� �Լ�
#define func(x,y)(((x)-(y))*((y)+1))

// �Ϲ� �Լ�
int function1(int x, int y) {
	x = x - y;
	y++;
	x = x * y;
	return x;
}