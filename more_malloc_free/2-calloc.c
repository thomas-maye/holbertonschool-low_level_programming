#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of each element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr;
	unsigned int i, array;

	array = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(array);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < array; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
