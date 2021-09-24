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
	//	�Ʒ� �ڵ忡�� PA[5]~PA[7]�� LED�� �����̰� �ش��ϴ� ��Ʈ�� clear�ϸ� ������ set�ϸ� ������.
	//	���� �������� ���� �ڸ��� 1�̸� LED3�� ON �ƴϸ� OFF
	(digit & 0x1) ? (PA &= ~(0x1 << 5)) : (PA |= (0x1 << 5));

	//	���� �������� ���� �ڸ��� 1�̸� LED2�� ON �ƴϸ� OFF
	(digit & 0x2) ? (PA &= ~(0x1 << 6)) : (PA |= (0x1 << 6));

	//	���� �������� ���� �ڸ��� 1�̸� LED1�� ON �ƴϸ� OFF
	(digit & 0x4) ? (PA &= ~(0x1 << 7)) : (PA |= (0x1 << 7));
}