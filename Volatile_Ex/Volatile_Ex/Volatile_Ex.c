#define PA (*(volatile unsigned char*)0x30000000)

void main(void) {
	int i;
	volatile int j;
	init();
	while (1) {
		for (i = 0; i < 8; i++) {
			display(i);
			for (j = 0; j < 100000; j++);
		}
	}
}