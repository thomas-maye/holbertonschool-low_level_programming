#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: string
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
