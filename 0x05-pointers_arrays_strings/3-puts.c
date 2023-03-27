#include "main.h"

/**
 * _puts - A funtion to print a string
 * @str: a chracter type of pointer
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
	putchar(*(str + i));
	i++;
	}
	putchar('\n');
}
