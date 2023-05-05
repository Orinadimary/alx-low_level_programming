#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of the bit wanted
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 84)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
