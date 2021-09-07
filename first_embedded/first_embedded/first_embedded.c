#include <stdio.h>
#define PA (*(volatile unsigned char*)0x30000000)


void init(void);	// LED 초기화 함수
void display(int digit);

void main(void) {
	int i, j;
	init();
	while (1) {
		for (i = 0; i < 8; i++) {
			display(i);
			for (j = 0; j < 100000; j++);	// 지연 루프
		}
	}
}

void init(void) {
	PA |= (0x7 << 5);
}

void display(int digit) {
	init();
	switch (digit) {
	case 1:
		PA &= ~(0x1 << 5);
		break;
	case 2:
		PA &= ~(0x2 << 5);
		break;
	case 3:
		PA &= ~(0x3 << 5);
		break;
	case 4:
		PA &= ~(0x1 << 7);
		break;
	case 5:
		PA &= ~(0x5 << 5);
		break;
	case 6:
		PA &= ~(0x3 << 6);
		break;
	case 7:
		PA &= ~(0x7 << 5);
		break;
	}
}