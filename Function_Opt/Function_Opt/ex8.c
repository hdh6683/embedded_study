// 함수의 리턴 값을 이전 함수로 넘기지 않는다

int fact(int x, int y) {
	if (x == 0)
		return y;
	else
		return fact(x - 1, y * x);
}