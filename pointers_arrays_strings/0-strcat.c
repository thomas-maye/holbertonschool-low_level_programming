#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
