#include "main.h"

/**
 * main - Prints _Putchar followed by new line
 *
 * Return: 0 is always for success
 */
int main(void)
{
	char *c;
	int i;

	c = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar (c[i]);
	}
	_putchar('\n');
	return (0);
}
