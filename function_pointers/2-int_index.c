#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an interger
 * @array : the array
 * @size : is the number of elements in the array
 * @cmp: is a pointer to the function to be used to the values
 * Return: i (the number searches)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	if (array && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);

}

