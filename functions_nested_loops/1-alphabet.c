#include "main.h"

/**
  * print_alphabet - Print the alphabet from a to z
  *
  * Return: 0 because void
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
