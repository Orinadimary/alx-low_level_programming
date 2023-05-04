#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number that prints binary
 */
void print_binary(unsigned long int n)
{
	int y, number = 0;
	unsigned long int current;

	for (y = 63; y >= 0; y--)
	{
		current = n >> y;

		if (current & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}
