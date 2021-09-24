#define PA (*(volatile unsigned char*)0x30000000)

void init(void);
void display(int digit);

void main(void) {
	int i;
	int j;
	init();
	while (1) {
		for (i = 0; i < 8; i++) {
			display(i);
			for (j = 0; j < 100000; j++);
		}
	}
}

void init(void) {
	PA |= (0x7 << 5);
}

void display(int digit) {
	//	아래 코드에서 PA[5]~PA[7]이 LED의 범위이고 해당하는 비트를 clear하면 켜지고 set하면 꺼진다.
	//	들어온 이진수의 일의 자리가 1이면 LED3을 ON 아니면 OFF
	(digit & 0x1) ? (PA &= ~(0x1 << 5)) : (PA |= (0x1 << 5));

	//	들어온 이진수의 십의 자리가 1이면 LED2을 ON 아니면 OFF
	(digit & 0x2) ? (PA &= ~(0x1 << 6)) : (PA |= (0x1 << 6));

	//	들어온 이진수의 백의 자리가 1이면 LED1을 ON 아니면 OFF
	(digit & 0x4) ? (PA &= ~(0x1 << 7)) : (PA |= (0x1 << 7));
}