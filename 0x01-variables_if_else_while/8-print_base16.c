#include <stdio.h>

/**
 * main - print hexadecimal
 *
 * Return: 9 is for success
 */
int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
