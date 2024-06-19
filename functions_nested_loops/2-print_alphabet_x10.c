#include "main.h"

/**
  * print_alphabet_x10 - Print the alphabet from a to z ten times
  *
  * Return: without
  */

void print_alphabet_x10(void)
{
	char c;
	int compteur = 0;
	
	while (compteur <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	compteur++;
	}
}
