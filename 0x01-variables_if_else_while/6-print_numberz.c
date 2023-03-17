#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: 9 is for success
 */
int main(void)
{

	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
