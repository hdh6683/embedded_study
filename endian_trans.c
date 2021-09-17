#include <stdio.h>

typedef union four_byte {
	struct {
		unsigned char A;
		unsigned char B;
		unsigned char C;
		unsigned char D;
	};
	unsigned int whole;
}four_byte;

int main() {
	four_byte data;
	unsigned int original_data = 0x12345678;

	unsigned char* ptr = (unsigned char*)&original_data; // 1 바이트만을 가리키는 포인터를 생성함.

	printf("%x\n", original_data);//78 56 34 12

	data.D= ptr[0];
	data.C = ptr[1];
	data.B = ptr[2];
	data.A = ptr[3];

	printf("%x\n", data);//12 34 56 78

	return 0;
}