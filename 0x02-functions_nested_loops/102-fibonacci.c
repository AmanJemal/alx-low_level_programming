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
		printf("%li %li ", a, b);
		printf(",");
		a += b;
		b += a;
	}
	if (cntto % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
