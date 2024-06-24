#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: n is the number of times the character _
 * Return: Always 0
 */

void print_line(int n)
{
	int line;

	for (line = 1 ; line <= n ; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
