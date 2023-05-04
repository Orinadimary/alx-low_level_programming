#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
