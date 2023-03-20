#include <stdio.h>
/**
 * main - C program that prints size of various types 
 * Return: 0 where successful
 */
int main(void)
{
	char a;
        int b;
	long int c;
	long long int d;
	float e;

printf("size of char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of long in: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of float: % lu bytes(s)\n", (unsigned long)sizeof(e));
return (0);
