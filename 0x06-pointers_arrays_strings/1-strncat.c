#include "main.h"

/**
 * _strcat - a function that concatenate strings
 * @dest: destination string declared as pointer of type char
 * @src: source string declared as pointer of type char
 * @n: number to count charcter.
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
