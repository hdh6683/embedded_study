void test(unsigned int a) {
	switch (a) {
	case 23:
		f23();
		break;
	case 2:
		f2();
		break;
		// ......
	case 255:
		f255();
		break;
	default:
		input_err();
	}

	void (*fp[255])() = { f1,f2,...,f255 };
	void test(unsigned int a) {
		fp[a - 1]();
	}
}