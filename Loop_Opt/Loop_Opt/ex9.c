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

//결국 for문 안에서 반복해서 함수를 호출하지 말고 함수 안에서 for문을 쓰는게 낫다.