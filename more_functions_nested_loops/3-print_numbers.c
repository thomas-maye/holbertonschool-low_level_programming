#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: without return beacause void
 */

void print_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
