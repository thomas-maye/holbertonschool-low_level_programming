#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Fonction frees grid created previously
 * @grid: the array of the numbers
 * @height: the height of the array
 * Return:
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		for (i = 0; i < height ; i++)
		{
		free(grid[i]);
		}
		free(grid);
	}
}
