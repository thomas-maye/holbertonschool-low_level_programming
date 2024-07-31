#include <stdio.h>
#include "main.h"

/**
 * print_binary -A function that prints the binary representation of a number
 * @n: a binary number
 * Return : nothing beacause it's an void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/*On fait une recursive de la fonction print_binary*/
		print_binary(n >> 1);
	}
	/*compare n avec 0001 (1 en bninaire) et on affiche*/
	_putchar((n & 1) + '0');
}
