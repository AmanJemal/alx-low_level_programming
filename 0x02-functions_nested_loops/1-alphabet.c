#include "main.h"

/**
 * print_alphabet - in lowercase
 *
 * Description: Prints the alphabet using _putchar function
 *
 * Return: type void
 */
void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
