#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int size;

	if (min > max)
		return (NULL);

	int *arr = (int *)malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	size = 0;

	while (min <= max)
	{
		arr[size] = min;
		min++;
	}
	return (arr);
}
