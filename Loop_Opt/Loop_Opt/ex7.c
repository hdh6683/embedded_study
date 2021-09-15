//Before
void function1(int* p) {
	int i;
	for (i = 0; i < 10; i++) {
		subfunction(*p, i);
	}
}

//After
void function1(int* p) {
	int i;
	int buf = *p;
	for (i = 0; i < 10; i++)
		subfunction(buf, i);
}