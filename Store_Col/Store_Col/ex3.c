#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f1() {
	printf("f1() ȣ��\n");
	return;
}

void f2() {
	printf("f2() ȣ��\n");
	return;
}

void f3() {
	printf("f3() ȣ��\n");
	return;
}

void main() {
	int choose;
	printf("1~3�� ���� �Է� : ");
	scanf("%d", &choose);

	// switch���� �̿��� �б�
	switch (choose) {
	case 1:
		f1();
		break;
	case 2:
		f2();
		break;
	case 3:
		f3();
		break;
	}

	void (*p[3])() = { f1,f2,f3 };
	p[choose-1]();
}