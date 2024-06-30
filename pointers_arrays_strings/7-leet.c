#include "main.h"

/**
 * *leet - Function that encodes a string into 1337
 * @str: a string
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char *searching = "aAeEoOtTlL";
	char *replacing = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; searching[j] != '\0' ; j++)
		{
			if (str[i] == searching[j])
			{
				str[i] = replacing[j];
			}
		}
	}
	return (str);
}
