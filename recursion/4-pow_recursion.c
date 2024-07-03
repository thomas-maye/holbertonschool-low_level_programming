#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Function that returns the value
 * of x raised to the power of y
 * @x: the value x
 * @y: the power of x
 * Return: -1 or x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
