#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define COUNT 100000
#define SIZE 1000

int f[SIZE];

int origin_fact(int x);
int return_fact(int x, int y);
int table_fact(int x);


void main(void)
{
	int num, result1, result2, result3;
	unsigned int start1, start2, start3, end1, end2, end3;

	for (int i = 0; i < SIZE; i++)
		f[i] = origin_fact(i);

	printf("0~%d�� ���� �Է��Ͻÿ�.\n�Է� >> ", SIZE - 1);
	scanf("%d", &num);

	//printf("�������� ����Լ� : %d\n",origin_fact(num));
	//printf("return ����ȭ ����Լ� : %d\n",return_fact(num, 1));
	//printf("���� ���̺� �Լ� : %d\n",table_fact(num));
	start1 = GetTickCount64();
	for (int i = 0; i < COUNT; i++)
	{
		origin_fact(num);
	}
	end1 = GetTickCount64();
	printf("�������� ����Լ� : %ums\n", end1 - start1);

	start2 = GetTickCount64();
	for (int i = 0; i < COUNT; i++)
	{
		return_fact(num, 1);
	}
	end2 = GetTickCount64();
	printf("return ����ȭ ����Լ� : %ums\n", end2 - start2);

	start3 = GetTickCount64();
	for (int i = 0; i < COUNT; i++)
	{
		table_fact(num);
	}
	end3 = GetTickCount64();
	printf("���� ���̺� �Լ� : %ums\n", end3 - start3);
}


int origin_fact(int x)
{
	//printf("fact(%d) called.\n", x);
	if ((x == 1) || (x == 0))
	{
		return 1;
	}
	else
	{
		return x * origin_fact(x - 1);
	}
}

int return_fact(int x, int y)
{
	//printf("fact(%d, %d) called.\n", x, y);
	if (x == 0)
	{
		return y;
	}
	else
	{
		return return_fact(x - 1, y * x);
	}
}

int table_fact(int x)
{
	//printf("f[%d] searched.\n", x);
	return f[x];
}