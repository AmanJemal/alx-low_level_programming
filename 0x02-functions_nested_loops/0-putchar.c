#include <unistd.h>

/**
 * main - Prints _Putchar followed by new line
 *
 * Return: 0 is always for success
 */
int main(void)
{

	const char *text = "_putchar\n";

	write(STDOUT_FILENO, text, 9);
	return (0);
}
