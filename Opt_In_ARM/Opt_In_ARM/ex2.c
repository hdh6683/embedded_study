void f1(int* x);

int f2(int a) {
	int i;
	f1(&a);
	for (i = 0; i < 10; i++)
		a *= i;
	return a;
}

int f2(int a) {
	int i, tmp;
	tmp = a;
	f1(&tmp);
	a = tmp;
	for (i = 0; i < 10; i++)
		a *= i;
	return a;
}