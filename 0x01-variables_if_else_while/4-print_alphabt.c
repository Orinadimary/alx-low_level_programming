#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	char i;

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}      
