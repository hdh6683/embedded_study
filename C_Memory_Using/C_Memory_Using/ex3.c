#include <stdio.h>
void func4(void);
int a;
void main(void) {
	int a = 10;
	{
		int a = 500, b = 5;
		printf("main�� ��� ������ ��� : a = %d b = %d\n", a, b);
	}
	//printf("��� �ܺο��� b = %d\n", b);
	func4();
	//printf("func4�� ���� ���� c = %d\n", c);
	printf("main�� ��� �ܺο��� ��� : a = %d\n", a);
}

void func4(void) {
	int c = 100;
	printf("func4���� ��� : a = %d c = %d \n", a, c);
}