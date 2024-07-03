#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Write a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * verify_prime_number - verify if a is a prime number
 * @n: the input integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (verify_prime_number(n, 2));
}

/**
 * verify_prime_number - verify if a is a prime number
 * @n: the input integer
 * @a: test if a is a prime number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int verify_prime_number(int n, int a)
{
	if (a == n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else if (a * a == n)
	{
		return (n);
	}
	return (verify_prime_number(n, a + 1));
}
