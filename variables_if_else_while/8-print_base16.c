#include <stdio.h>

/**
 * main - principal fonction to write numbers in base 16 in lowercase
 *
 * Return: 0 because it's void
 */

int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0 ; numbers < 10 ; numbers++)
		putchar ('0' + numbers);

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar (letters);

	putchar ('\n');

	return (0);
}
