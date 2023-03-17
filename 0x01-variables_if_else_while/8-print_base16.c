#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Return: 9 is for success
 */
int main(void)
{

	int i = 0;
	int j = 97;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
