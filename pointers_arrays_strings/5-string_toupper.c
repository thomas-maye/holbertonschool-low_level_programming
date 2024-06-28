#include "main.h"

/**
 * *string_toupper - Change all lowercase to uppercase
 * @s: is a pointer
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ' ';
	}
	return (s);
}
