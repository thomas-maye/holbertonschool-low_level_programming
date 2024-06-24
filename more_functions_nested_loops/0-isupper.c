#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character
 * @c: is the character which checked
 * Return: 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
