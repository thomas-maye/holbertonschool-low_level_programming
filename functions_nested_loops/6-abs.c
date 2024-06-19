#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: c is the numbers will be comput
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val_abs;

		val_abs = c * (-1);

		return (val_abs);
	}

	return (0);
}
