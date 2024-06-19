#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is the number who checked
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	return (lastDigit)
}
