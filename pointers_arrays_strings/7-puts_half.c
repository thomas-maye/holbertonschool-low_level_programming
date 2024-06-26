#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: is a string of number
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int n;
	int halflength;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	for (halflength = n; halflength < length; halflength++)
	{
		_putchar(str[halflength]);
	}
	_putchar('\n');
}
