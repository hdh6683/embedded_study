//before
int a;
void f1() {
	int i;
	for (i = 0; i < 10; i++)
		a *= i;
}

//after
int a;
void f1() {
	int i, b = a;
	for (i = 0; i < 10; i++)
		b *= i;
	a = b;
}