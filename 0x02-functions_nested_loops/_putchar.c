#include <unistd.h>

/**
 * _putchar - write the character to stdout
 *@c: is the charcter to print
 *
 * Return: 1 is for success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
