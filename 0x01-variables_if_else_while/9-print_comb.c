#include <stdio.h>

/**
 * Main - print bumbers comas and spaces
 *
 * Return: 0 is for success
 */
int main(void)
{

	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
