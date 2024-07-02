#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: an integer of the array
 * @size: value
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
