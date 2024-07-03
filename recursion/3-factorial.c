#include "main.h"
#include <stdio.h>

/**
 * factorial - the function that given me the
 * factorial of the number
 * @n: is the number
 * Return: -1 or 0 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
