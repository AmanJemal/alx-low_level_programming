#include <stdio.h>
/**
 * main - a func prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: argument vector that contains the program command line arguments.
 * Return: 0 Always success.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
