#include "main.h"

/**
  * print_alphabet - Print the alphabet from a to z x 10
  *
  * Return: 0 because void
  */

void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i < 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}	
	}

	_putchar('\n');
}
