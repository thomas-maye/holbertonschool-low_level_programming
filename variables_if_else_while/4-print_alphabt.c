#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, and uppercase without e and q
 *
 * Return: 0 because it's void
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
	if (alphabet != 'e' && alphabet != 'q')
		putchar (alphabet);
	}
	putchar ('\n');

	return (0);
}
