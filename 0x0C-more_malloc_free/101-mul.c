#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_digit - a string contains a non-digit char
 * @s: pointer to the string
 * Return:0 if non-digit, 1 not
 */
int is_digit(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] < '0' || s[n] > '9')
			return (0);
		n++;
	}
	return (1);
}
/**
 * _strlen - length of string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 * errors - errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, n, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (n = 0; n <= len1 + len2; n++)
		result[n] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
			carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{

			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (n = 0; n < len - 1; n++)
	{
		if (result[n])
			a = 1;
		if (a)
			_putchar(result[n] + '0');
	}

	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
