#include "main.h"

/**
 * _strcat - a function that concatenate strings
 * @des: destination string declared as pointer of type char
 * @src: source string declared as pointer of type char
 * Return: pointer ptr
 */
char *_strcat(char *dest, char *src)
{
	int  i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j >= 0; j++)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
	}
	return (dest);
}
