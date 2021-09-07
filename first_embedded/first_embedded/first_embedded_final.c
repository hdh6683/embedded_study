#include <stdio.h>
#define PA (*(volatile unsigned char*)0x30000000)
#define clear_bit(data,loc)((data)&=(0x1<<(loc)))
#define set_bit(data,loc)((data)|=(0x1<<(loc)))
#define check_bit(data,loc)((data)&(0x1<<(loc)))

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
	//(digit & 0x1) ? (PA &= ~(0x1 << 5)) : (PA |= (0x1 << 5));
	check_bit(digit, 0) ? clear_bit(PA, 5) : set_bit(PA, 5);

	//(digit & 0x2) ? (PA &= ~(0x1 << 6)) : (PA |= (0x1 << 6));
	check_bit(digit, 1) ? clear_bit(PA, 6) : set_bit(PA, 6);

	//(digit & 0x4) ? (PA &= ~(0x1 << 7)) : (PA |= (0x1 << 7));
	check_bit(digit, 2) ? clear_bit(PA, 7) : set_bit(PA, 7);
}