#include "main.h"

/**
 * print_alphabet - in lowercase
 *
 * Description: Prints the alphabet using _putchar function
 *
 * Return: type void
 */
int _putchar(char c);
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
