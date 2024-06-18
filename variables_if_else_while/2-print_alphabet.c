#include <stdio.h>

/**
 * main - fonction to prints alphabet a to z in lowercase
 *
 * Return: 0 because it's void
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
	putchar (alphabet);
	}

	putchar ('\n');

	return (0);
}
