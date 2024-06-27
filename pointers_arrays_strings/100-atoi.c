#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function that convert a string to an integer
 * @s: a pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0, neg = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg = neg * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}
	return (neg * result);
}
