#include "main.h"
/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return: None.
 */
int _putchar(char c);

void print_alphabet_x10(void)
{

	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}