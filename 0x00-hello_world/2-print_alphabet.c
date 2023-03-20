#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase followed by new line
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i < -'z' ; i++)
		putchar(i);
	putchar ('\n');
	return (0);
}

