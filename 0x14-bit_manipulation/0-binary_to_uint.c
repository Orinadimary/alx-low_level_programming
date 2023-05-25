#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: string to the binary
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;
	int x, two_base;

	if (!b)
		return (0);

	y = 0;

	for (x = 0; b[x] != '\0';)
		x++;

	for (x--, two_base = 1; x >= 0; x--, two_base *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			unix += two_base;
		}
	}
	return (unix);
}
