// Before
for (i = 0; i < 1000; i++) {
	function1(x, i);
}

void function1(int m, int n) {
	/*do sometihing*/
}
// After
function1(x);

void function1(int m) {
	int i;

	for (i = 0; i < 1000; i++) {
		/*do something*/
	}
}

//�ᱹ for�� �ȿ��� �ݺ��ؼ� �Լ��� ȣ������ ���� �Լ� �ȿ��� for���� ���°� ����.