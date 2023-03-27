#include <stdio.h>

/**
 * _strlen - a function returns the length of a string
 * @s: Declared as pointer of type character
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
