#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 followed by s2 or NULL if empty string or failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i1, i2, lenght1 = 0, lenght2 = 0;
	char *sconcat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (!s1[lenght1])
	{
		lenght1++;
	}
	while (!s2[lenght2])
	{
		lenght2++;
	}

	sconcat = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (sconcat == NULL)
	{
		return (NULL);
	}

	for (i1 = 0; i1 < lenght1; i1++)
	{
		sconcat[i1] = s1[i1];
	}
	for (i2 = 0; i2 < lenght2; i1++, i2++)
	{
		sconcat[i1] = s2[i2];
	}
	sconcat = 0;

	return (sconcat);
}
