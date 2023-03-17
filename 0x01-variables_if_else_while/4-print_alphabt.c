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

	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
