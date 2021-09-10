#include <stdio.h>
void func4(void);
int a;
void main(void) {
	int a = 10;
	{
		int a = 500, b = 5;
		printf("main의 블록 내에서 출력 : a = %d b = %d\n", a, b);
	}
	//printf("블록 외부에서 b = %d\n", b);
	func4();
	//printf("func4의 지역 변수 c = %d\n", c);
	printf("main의 블록 외부에서 출력 : a = %d\n", a);
}

void func4(void) {
	int c = 100;
	printf("func4에서 출력 : a = %d c = %d \n", a, c);
}