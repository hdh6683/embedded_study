// �Լ��� ���� ���� ���� �Լ��� �ѱ��� �ʴ´�

int fact(int x, int y) {
	if (x == 0)
		return y;
	else
		return fact(x - 1, y * x);
}