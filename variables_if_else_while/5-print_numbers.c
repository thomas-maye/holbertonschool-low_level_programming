#include <stdio.h>

/**
 * main - principal fonction to write numbers in base 10
 *
 * Return: 0 because it's void
 */

int main(void)
{
	int numbers;

	for (numbers = '1' ; numbers <= '10' ; numbers++)
	{
	printf(numbers);
	}

	printf('\n');

	return (0);
}
