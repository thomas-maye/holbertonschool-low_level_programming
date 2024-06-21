#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: it is the last number to print
 * Return : without
 */

void print_to_98(int n)
{
	int i1, i2;

	if (n >= 98)
	{
		for (i1 = n; i1 >=  98; i1--)
		{
			if (i1 != 98)
				printf("%d, ", i1);
			else if (i1 == 98)
				printf("%d\n", i1);
		}
	}
	else if (n <= 98)
	{
		for (i2 = n; i2 <= 98; i2++)
		{
			if (i2 != 98)
				printf("%d, ", i2);
			else if (i2 == 98)
				printf("%d\n", i2);
		}
	}
}
