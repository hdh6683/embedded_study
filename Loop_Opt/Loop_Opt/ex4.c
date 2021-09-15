//Before
int cntbit(int n) {
	int cnt = 0;
	while (n != 0) {
		if (n & 0x1)
			cnt++;
		n >>= 1;
	}
	return cnt;
}

//After
int cntbit(int n) {
	int cnt = 0;
	while (n != 0) {
		if (n & 0x1)cnt++;
		if (n & 0x2)cnt++;
		if (n & 0x4)cnt++;
		if (n & 0x8)cnt++;
		n >>= 4;
	}
	return cnt;
}