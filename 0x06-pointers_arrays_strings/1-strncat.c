#include "main.h"

/**
 * _strcat - a function that concatenate strings
 * @dest: destination string declared as pointer of type char
 * @src: source string declared as pointer of type char
 * @n: number to count charcter.
 * Return: pointer ptr
 */
char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
	}
	return (dest);
}
