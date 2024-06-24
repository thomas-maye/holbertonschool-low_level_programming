#include <stdio.h>
#include "main.h"

/**
 * _isdigit - is function that checks for a digit (0 through 9).
 *@c: character wich checked
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
