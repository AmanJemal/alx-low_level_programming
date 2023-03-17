#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Describes the last digit of random number
 *
 * Return: 0 is for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is less than 5 and not 0\n", n);
	}
	return (0);
}
