#include "main.h"

/**
  * _isalpha - checks for lowercase character or uppercase
  * @c: "c" is the variable to be checked
  * Return: returns 1 if lowercase or uppercase, and 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
