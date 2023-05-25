#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number one
 * @m: number two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, value = 0;

	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1);
		value++;
	}
	return (value);
}
