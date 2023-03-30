#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: destination
 * @src: source
 * @n: number of bytes of character
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
