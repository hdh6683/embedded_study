// goto 문으로 재귀 호출 제거
int fact(int x) {
	int i, result = 1;
	if (x == 0)return 1;
L1:
	if (i <= x)
		result *= i++;
	else
		return result;
	goto L1;
}

// for 문으로 재귀 호출 제거
int fact(int x) {
	int i, result = 1;
	if (x == 0)return 1;
	for (i = 1; i <= x; i++)
		result *= i;
	return result;
}