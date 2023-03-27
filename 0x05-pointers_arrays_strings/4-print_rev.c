#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: a variable declared as pointer of type character
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
