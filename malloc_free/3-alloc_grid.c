#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: NULL if failure or if width and height is 0
 */

int **alloc_grid(int width, int height)
{
	int **array2dimm;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	array2dimm = malloc(sizeof(int *) * height);

	if (array2dimm == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array2dimm[i] = (int *)malloc(sizeof(int) * width);

		if (array2dimm[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array2dimm[j]);
			}
			free(array2dimm);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array2dimm[i][j] = 0;
		}
	}
	return (array2dimm);
}
