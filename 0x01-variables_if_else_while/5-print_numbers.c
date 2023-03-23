#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines to print single digit  numbers
 *
 * Return: 0 is for success
 */
int main(void)
{

	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
