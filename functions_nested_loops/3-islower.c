#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: "c" is the variable to be checked
  * Return: returns 1 if lowercase, and 0 otherwise
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
