#include <stdio.h>

/**
 * main - prints alphabet a to z in lowercase
 *
 * Return : 0 because it's void
 */

int main(void)
{
	char alphabet = "a";

	for (alphabet = "a"; alphabet <= "z"; alphabet++)
	putchar (alphabet);

	putchar ("\n");

	return (0);
}
