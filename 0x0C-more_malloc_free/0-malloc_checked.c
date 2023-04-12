#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that determine allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the reserved memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
