#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int choose;
	char text;
	printf("1~3의 숫자 입력 : ");
	scanf("%d", &choose);

	// switch문을 이용한 분기
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

	// 분기가 일어나지 않는 효율적인 코드
	static char* buf = "abc";
	text = buf[choose];
}