#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int cnter;
	int cntto = 50;
	long a = 1;
	long b = 2;

	for (cnter = 1; cnter <= (cntto / 2); cnter++)
	{
		printf("%ld, ", a);
		printf("%ld", b);
		a += b;
		b += a;
	}
	if (cntto % 2 == 1)
		printf("%ld", a);

	printf("\n");

	return (0);
}
