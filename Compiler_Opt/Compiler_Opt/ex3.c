#include <stdio.h>
void main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("%d", c);
	if ((a + b) > 10)
		c = (a + b) * 2;
	else
		c = (a + b) * 5;
}