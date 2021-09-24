//비트 연산에서 의문점 : a ^= (0x1<<5); 랑 a ^= 0x100000; 중에서 뭐가 더 빠른가?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define clear_bit(data,loc) ((data)&=~(0x1<<(loc)))
#define clear_bits(data,area,loc) ((data)&=~((area)<<(loc)))
#define set_bit(data,loc) ((data)|=(0x1<<(loc)))
#define set_bits(data,area,loc)((data)|=((area)<<(loc)))
#define invert_bit(data,loc) ((data)^=(0x1<<(loc)))
#define invert_bits(data,area,loc) ((data)^=((area)<<(loc)))
#define check_bit(data,loc) ((data)&(0x1<<(loc)))
#define extract_bits(data,area,loc) (((data)>>(loc))&(area))

int main(void) {
	unsigned char a = 0xf0;
	unsigned char b;

	b = clear_bit(a, 5);
	printf("%#x\n", b);
	b = clear_bits(a, 0x7, 3);
	printf("%#x\n", b);

	b = set_bit(a, 5);
	printf("%#x\n", b);
	b = set_bits(a, 0x7, 3);
	printf("%#x\n", b);

	b = invert_bit(a, 5);
	printf("%#x\n", b);
	b = invert_bits(a, 0x7, 3);
	printf("%#x\n", b);

	printf("a : %#x\n", a);
	if (check_bit(a, 5))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	b = extract_bits(a, 0x7, 4);
	printf("%#x\n", b);
}