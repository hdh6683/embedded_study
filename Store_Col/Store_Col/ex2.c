#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int choose;
	char text;
	printf("1~3�� ���� �Է� : ");
	scanf("%d", &choose);

	// switch���� �̿��� �б�
	switch (choose) {
	case 1:
		text = 'a';
		break;
	case 2:
		text = 'b';
		break;
	case 3:
		text = 'c';
		break;
	}

	// �бⰡ �Ͼ�� �ʴ� ȿ������ �ڵ�
	static char* buf = "abc";
	text = buf[choose];
}