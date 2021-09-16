#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int f1(int z) {
	return (add(z * z, 2 * z));
}

void main() {
	f1(5);
}