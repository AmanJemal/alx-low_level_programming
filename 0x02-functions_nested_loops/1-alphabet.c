#include "main.h"

/**
 * print_alphabet - in lowercase
 *
 * Description: Prints the alphabet using _putchar function
 *
 * Return: type void
 */
int _putchar(char c);

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
