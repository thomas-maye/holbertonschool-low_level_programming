#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: 0 because it's void
 */

int main(void)
{
	int numbers;

	for (numbers = 0 ; numbers < 10 ; numbers++)
	{
		putchar ('0' + numbers);
		if (numbers < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}

	putchar ('\n');

	return (0);
}
