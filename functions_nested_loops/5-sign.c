#include "main.h"

/**
  * print_sign - print the signe of the number
  * @n: "n" is the number to be checked
  * Return: returns 1 if > 0, and 0 if is 0, and -1 < 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
