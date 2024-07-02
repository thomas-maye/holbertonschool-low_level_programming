#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
