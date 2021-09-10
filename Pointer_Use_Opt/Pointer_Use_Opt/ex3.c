#include <stdio.h>

struct sample {
	char a[10];
	int b;
	float c;
}f[3] = {
	{"test1",10,10.5},
	{"test2",20,20.5},
	{"test3",30,30.5}
};

int add(int, int);

// 인자 테스트에 사용할 함수들의 프로토타입
void arg_arr_test(int*);
void arg_str_test(char*);
void arg_stru_test(struct sample*);
void arg_func_test(int(*)(int, int));

void main(void) {
	int d[] = { 1,2,3,4,5,6,7,8,9,10 };
	char* e = "hello";

	arg_arr_test(d);
	arg_str_test(e);
	arg_stru_test(f);
	arg_func_test(/*(int(*)(int, int))*/add);
}

void arg_arr_test(int* x) {
	int i;
	for (i = 0; i < 10; i++)
		printf("d[%d] = %d\t", i, x[i]);
	printf("\n");
}

void arg_str_test(char* x) {
	printf("e = %s\n", x);
}

void arg_stru_test(struct sample* x) {
	int i;
	for (i = 0; i < 3; i++)
		printf("%d번째 : %s  %d  %f\n", i, x[i].a, x[i].b, x[i].c);
}

void arg_func_test(int(*x)(int, int)) {
	int a = 10, b = 20;
	printf("add 함수 결과 : %d\n", x(a, b));
}

int add(int x, int y) {
	return x + y;
}