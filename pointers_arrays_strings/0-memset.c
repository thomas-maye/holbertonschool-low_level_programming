#include "main.h"
#include <stdio.h>

/**
 * *_memset - function fills the first n bytes
 *of the memory area pointed to by s
 *with the constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: the first byte of the memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
