#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prinys lowercase alphabets except e and q
 *
 * Return: 0 is for success
 */
int main(void)
{

	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
