#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sul of all its parameters
 * @n: the last parameters
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	unsigned int number = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0 ; i < n ; i++)
	{
		number = va_arg(args, int);
		sum = number + sum;
	}

	va_end(args);

	return (sum);
}
