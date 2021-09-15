//Before
int a[10], i, sum = 0;
for (i = 0; i < 10; i++)
	a[i] = i + 1;
for (i = 0; i < 10; i++)
	sum += a[i];

//Afters
int a[10], i, sum = 0;
for (i = 0; i < 10; i++) {
	a[i] = i + 1;
	sum += a[i];
}