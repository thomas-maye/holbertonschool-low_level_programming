#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that convert a binary number
 * into an unsigned integer
 * @b: a string (a binary number)
 * Return: num, the convert number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num_convert = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num_convert = num_convert * 2 + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (num_convert);


}
