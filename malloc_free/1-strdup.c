#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup : function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 * @str: a string
 * Return: NULL if str=NULL or a pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;

	if (str == 0)
	{
		return (NULL);
	}

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
