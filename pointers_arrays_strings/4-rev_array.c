#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp, result;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		result = a[n - i - 1];
		a[i] = result;
		result = temp;
	}

}
