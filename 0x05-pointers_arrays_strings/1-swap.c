#include <stdio.h>

/**
 * swap_int - swapping two integers
 * @a: declare a as pointer of integer
 * @b: declare b as pointer of integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
