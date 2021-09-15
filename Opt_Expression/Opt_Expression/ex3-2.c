//1
a = (b + d) / c;


//2
if ((unsigned)(a | b) < 10) { f1(); }


//3
if (x & (x - 1) == 0 && x != 0) { f1(); }


//4
int test(int a, int b, int c, int d, int e) {
	if (a > 0 && b > 0 && c == 0 && d < 0 && e>0)
		return 1;
	else
		return -1;
}


//5
x += 3;
x &= ~3;