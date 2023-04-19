#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action:  action of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}

}
