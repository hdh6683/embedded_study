#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

__inline int square(int x) {
	return x * x;
}

double add(int x, int y) {
	return (square(x) + square(y));
}