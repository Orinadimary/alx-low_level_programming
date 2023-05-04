#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: string to the binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int value = 0;

	if (!b)
		return (0);
	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		value = 2 *value + (b[y] - '0');
	}
	return (value);
}
