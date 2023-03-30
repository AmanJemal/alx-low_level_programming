#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: pointer to s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (res == 0)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		res = s1[i] - s2[i];
		i++;
	}
	return (res);
}
