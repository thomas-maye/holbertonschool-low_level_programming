#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns the natural
 * square root of a number
 * @n: the number
 * Return: void
 */

int _sqrt_recursion(int n)
{
	int start = 1, end = n / 2, mid;
	int result = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (result);
}
