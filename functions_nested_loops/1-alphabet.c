#include "main.h"

/**
  * print_alphabet - Print the alphabet from a to z
  *
  * Return: 0 because void
  */

int  print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}
