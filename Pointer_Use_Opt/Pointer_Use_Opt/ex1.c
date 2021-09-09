#include <stdio.h>
void main() {
	char a[] = "apple";
	char* p = a;
	a[1] = 'k';
	p[1] = 'k';
	printf("%s\n", a);
	printf("%s\n", p);
}