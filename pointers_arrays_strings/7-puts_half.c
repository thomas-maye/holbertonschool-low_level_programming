#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * @str: is a string of number
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i >= 5)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
