#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: the chessbord, array in two dimmensions
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int hor, vert;

	for (hor = 0; hor < 8; hor++)
	{
		for (vert = 0; vert < 8; vert++)
		{
			_putchar(a[hor][vert]);
		}
		_putchar('\n');
	}
}
