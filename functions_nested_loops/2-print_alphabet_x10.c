#include "main.h"

/**
  * print_alphabet - Print the alphabet from a to z x 10
  *
  * Return: 0 because void
  */

void print_alphabet(void)
{
	char c;
	int compteur = 0;

	while (compteur < 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	}

	_putchar('\n');
	compteur++
}
