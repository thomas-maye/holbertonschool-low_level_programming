#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: is an interger which swap to b
 * @b: is an interger which swap to a
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
