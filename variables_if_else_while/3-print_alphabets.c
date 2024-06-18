#include <stdio.h>

/**
 * main - fonction to prints alphabet in lowercase, and uppercase
 *
 * Return: 0 because it's void
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar (alphabet);

	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
		putchar (alphabet);

	putchar ('\n');

	return (0);
}
