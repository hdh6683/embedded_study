#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//before
	char c;
	c = getch();
	switch (c) {
	case 'A':
	{
		puts("A");
		break;
	}
	case 'B':
	{
		puts("B");
		break;
	}
	case 'C':
	{
		puts("C");
		break;
	}
	}

	//after
	int c;
	c = getch();
	switch (c) {
	case 0:
	{
		puts("A");
		break;
	}
	case 1:
	{
		puts("B");
		break;
	}
	case 2:
	{
		puts("C");
		break;
	}
	}
}