#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function that gets the length
 * of a prefix substring
 * @s: initial segment
 * @accept: string
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		n++;
	}
	return (n);
}
