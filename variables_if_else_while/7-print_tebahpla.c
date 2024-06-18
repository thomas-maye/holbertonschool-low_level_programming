#include <stdio.h>

/**
 * main - fonction to prints alphabet z to a in lowercase
 *
 * Return: 0 because it's void
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
		putchar (alphabet);

	putchar ('\n');

	return (0);
}
