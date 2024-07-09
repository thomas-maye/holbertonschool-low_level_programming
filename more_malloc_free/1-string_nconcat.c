#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: first string will be concatenated
 * @s2: second string willbe concateneted with s1
 * @n: bytes
 * Return: sconcat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	while (s1[lenght1] != 0)
	{
		lenght1++;
	}
	while (s2[lenght2] != 0 && lenght2 <= n)
	{
		lenght2++;
	}

	sconcat = malloc(sizeof(char) * (lenght1 + n) + 1);

	if (sconcat == NULL)
	{
		return (NULL);
	}

	for (i1 = 0; i1 < lenght1; i1++)
	{
		sconcat[i1] = s1[i1];
	}
	for (i2 = 0; i2 < n; i1++, i2++)
	{
		sconcat[i1] = s2[i2];
	}
	return (sconcat);
}
