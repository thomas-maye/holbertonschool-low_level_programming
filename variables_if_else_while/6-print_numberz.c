#include <stdio.h>

/**
 * main - principal fonction to write numbers in base 10
 *
 * Return: 0 because it's void
 */

int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers < 10 ; numbers++)
		putchar ('0' + numbers);

	putchar ('\n');

	return (0);
}
