#include "main.h"
#include <stdlib.h>

/**
 * char_free_grid - A two-dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void char_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a given string into words.
 * @str: string.
 *
 * Return: pointer to an integer of array.
 */
char **strtow(char *str)
{
	char **arr_out;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	arr_out = malloc((height + 1) * sizeof(char *));
	if (arr_out == NULL || height == 0)
	{
		free(arr_out);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr_out[i] = malloc((c - a1 + 2) * sizeof(char));
				if (arr_out[i] == NULL)
				{
					char_free_grid(arr_out, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			arr_out[i][j] = str[a1];
		arr_out[i][j] = '\0';
	}
	arr_out[i] = NULL;
	return (arr_out);
}
