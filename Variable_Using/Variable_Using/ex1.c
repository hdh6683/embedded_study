#include <stdio.h>
#include <Windows.h>
#define COUNT 1000000000
int global_var;

int f2() {
	return 1;
}

void f1_1() {
	int i;
	for (i = 0; i < COUNT; i++) {
		if (f2())
			global_var++;
	}
}

void f1_2() {
	int i, local_var = global_var;
	for (i = 0; i < COUNT; i++) {
		if (f2())
			local_var++;
	}
	global_var = local_var;
}

int main(void) {
	unsigned int start, end;

	start = GetTickCount64();
	f1_1();
	end = GetTickCount64();
	printf("%ums\n", end - start);

	start = GetTickCount64();
	f1_2();
	end = GetTickCount64();
	printf("%ums\n", end - start);
}