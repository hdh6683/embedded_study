#include <stdio.h>
void main(void) {
	char a[] = "rose";
	char* p = "grace";

	a[0] = 'n';
	p[0] = 't';

	printf("a = %s\n", a);
	printf("p = %s\n", p);
}