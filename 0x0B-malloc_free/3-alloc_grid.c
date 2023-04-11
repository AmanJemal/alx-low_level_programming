#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - provides a pointer to an array of integers with two dimensions.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer to an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridPtr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridPtr = malloc(height * sizeof(int *));
	if (gridPtr == NULL)
	{
		free(gridPtr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridPtr[i] = malloc(width * sizeof(int));
		if (gridPtr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridPtr[i]);
			free(gridPtr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridPtr[i][j] = 0;

	return (gridPtr);
}
