#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: loswest value
 * @max: highest value
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, n = 0, i = min;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (n <= max - min)
		ptr[n++] = i++;
	return (ptr);
}
