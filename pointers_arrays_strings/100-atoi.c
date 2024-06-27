#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function that convert a string to an integer
 * @s: a pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int i, neg = 1, result = 0, testok = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
		{
			neg = neg * -1;
			testok = 0;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + s[i] - '0';
			testok = 1;
		}
		else if (testok == 1)
		{
			break;
		}
	}
	result = result * neg;
	return (result);
}
