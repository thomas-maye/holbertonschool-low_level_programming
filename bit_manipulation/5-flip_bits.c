#include <stdio.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the first integer
 * @m: the second integer
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff = n ^ m;
	int count = 0;

	while (bit_diff != 0)
	{
		if ((1 & bit_diff) == 1)
		{
			count++;
		}
		bit_diff = bit_diff >> 1;
	}
	return (count);
}
