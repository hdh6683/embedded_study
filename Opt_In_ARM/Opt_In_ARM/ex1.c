int test1(int x)
{
	int i, j = 1;
	for (i = 1; i <= x; i++)
		j *= i;
	return j;
}
int test2(int x)
{
	int i, j = 1;
	for (i = x; i != 0; i--)
		j *= i;
	return j;
}