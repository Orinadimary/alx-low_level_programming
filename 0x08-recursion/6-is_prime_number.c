#include "main.h"
#include <stdio.h>

int actual_prime(int n, int j);

/**
* is_prime_number - determines number is prime
* @n: number to input
* Return: 1 if n is prime number 0 not prime number
*/
int is_prime_number(int n)

{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
* actual_prime - evaluates a prime number recussively
* @n: number to input
* @j: iterator
* Return: 1 if n is prime number 0 not prime number
*/
int actual_prime(int n, int j)
{
if (n == 1)
return (1);
if (n % j == 0 && j > 0)
return (0);
return (actual_prime(n, j - 1));
}
