#include <stdio.h>
/**
 * main - print trhe alphabet in lowercase
 *
 * Return : 0 is for success
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
