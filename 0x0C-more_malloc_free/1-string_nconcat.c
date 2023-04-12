#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -A function that join (concatenates) two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_out;
	unsigned int len_str1, len_str2, len_str_out, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_str1 = 0; s1[len_str1] != '\0'; len_str1++)
		;

	for (len_str2 = 0; s2[len_str2] != '\0'; len_str2++)
		;

	if (n > len_str2)
		n = len_str2;

	len_str_out = len_str1 + n;

	str_out = malloc(len_str_out + 1);

	if (str_out == NULL)
		return (NULL);

	for (size = 0; size < len_str_out; size++)
		if (size < len_str1)
			str_out[size] = s1[size];
		else
			str_out[size] = s2[size - len_str1];

	str_out[size] = '\0';

	return (str_out);
}
