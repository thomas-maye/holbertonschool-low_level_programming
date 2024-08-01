#include <stdio.h>
#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * to 0 at a given index
 * @n: an integer
 * @index:  the index, starting from 0 of the bit you
 * want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int j;

	j = index;

	/*if (index == 0)*/
	/*{*/
		/*return (*n);*/
	/*}*/

	if (sizeof(index) > sizeof(*n))
	{
		return (-1);
	}

	for (i = 1; j > 0; i *= 2, j--)
	{
	}

	if ((*n >> index) & 1)
	{
		*n -= i;
	}
	return (1);

}
