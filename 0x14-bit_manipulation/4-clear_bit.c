#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: the index, starting from 0 of the bit you want to se
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 84)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
