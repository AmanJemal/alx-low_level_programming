#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block.
 * @ptr: pointer to the memory allocated.
 * @old_size: size of allocated space of ptr, in bytes.
 * @new_size: new size new memory block, in bytes.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
