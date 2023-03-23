#include "main.h"
#include <unistd.h>

/**
 * _putchar - used to write a character type in c
 * @c: the character to print
 * Return: Always 0
 * On error, -1 is returned errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
