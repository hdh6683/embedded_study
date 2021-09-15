#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct SR {
	unsigned int CF : 1,
		PF : 1,
		AF : 1,
		ZF : 1,
		SF : 1,
		IF : 1,
		MOD : 4;
};

void main() {
	struct SR flag;
	flag.AF = 1;
	printf("%d\n", flag.AF);
	flag.AF = !flag.AF;
	printf("%d\n", flag.AF);
	flag.AF ^= 1;// XOR
	printf("%d\n", flag.AF);
}