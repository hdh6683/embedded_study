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
	struct SR flag = { 1,1,0,1,0,1,0xF };

	if (flag.CF)
		printf("carry\n");
	if (flag.PF)
		printf("parity\n");
	if (flag.AF)
		printf("assistant carry\n");
	if (flag.ZF)
		printf("zero\n");
}