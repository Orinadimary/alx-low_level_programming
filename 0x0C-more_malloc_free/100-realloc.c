#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: is the size, in bytes
 * @new_size: new size, in bytes
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int n;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (n = 0);(old_size || n < new_size); n++;
	{
		*(realloc + n) = clone[n];
	}
	free(ptr);
}
