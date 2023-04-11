#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Joins together (concatenates) all the parameters of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to a character array.
 */
char *argstostr(int ac, char **av)
{
	char *arr_out;
	int c, i, j, ind_arr;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	arr_out = malloc((c + 1) * sizeof(char));

	if (arr_out == NULL)
	{
		free(arr_out);
		return (NULL);
	}

	for (i = j = ind_arr = 0; ind_arr < c; j++, ind_arr++)
	{
		if (av[i][j] == '\0')
		{
			arr_out[ind_arr] = '\n';
			i++;
			ind_arr++;
			j = 0;
		}
		if (ind_arr < c - 1)
			arr_out[ind_arr] = av[i][j];
	}
	arr_out[ind_arr] = '\0';

	return (arr_out);
}
