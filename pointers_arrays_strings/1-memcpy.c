#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function  copies n bytes from memory area src
 * to the memory area dest
 * @dest: pointer destination
 * @src: pointer source
 * @n: bytes of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
