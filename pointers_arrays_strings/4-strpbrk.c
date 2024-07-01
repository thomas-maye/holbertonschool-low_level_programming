#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Function that searches a string for
 * any of a set of bytes
 * @s: the first occurence in the string
 * @accept: bytes
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
