#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Function that copies the string pointed
 * @dest: pointer
 * @src: pointer
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
