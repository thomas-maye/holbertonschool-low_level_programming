#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of char
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: specific char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
