#include "main.h"

/**
 * _strlen_recursion - a func returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * char_compare - is a func compares each character of the string.
 * @s: string
 * @sI: smallest iterator.
 * @bI: biggest iterator.
 * Return: 0 for success.
 */
int char_compare(char *s, int sI, int bI)
{
	if (*(s + sI) == *(s + bI))
	{
		if (sI == bI || sI == bI + 1)
			return (1);
		return (0 + char_compare(s, sI + 1, bI - 1));
	}
	return (0);
}

/**
 * is_palindrome - is afunc that detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (char_compare(s, 0, _strlen_recursion(s) - 1));
}
