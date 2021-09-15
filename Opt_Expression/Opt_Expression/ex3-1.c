//1
a = b / c + d / c;


//2
if ((A >= 0 && a < 10) && (b >= 0 && b < 10)) { f1(); }


//3
if ((x == 1) || (x == 2) || (x == 4) || (x == 8)) { f1(); }


//4
int test(int a, int b, int c, int d, int e) {
	if (a > 0) {
		if (b > 0)
			if (c == 0)
				if (d < 0)
					if (e > 0)
						return 1;
	}
	else
		return -1;
}


//5
z = x % 4;
switch (z) {
case 3:
	x += 1;
	break;
case 2:
	x += 2;
	break;
case 1:
	x += 3;
}