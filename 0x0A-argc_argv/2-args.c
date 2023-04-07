#include <stdio.h>
/**
 * main - a func prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: a vector arg that contains the program command line arguments.
 * Return: 0 Always success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
