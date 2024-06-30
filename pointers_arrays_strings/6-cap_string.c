#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function that capitalazes all words of a string
 * @str: string that capitalizes
 * Return: 0
 */

char *cap_string(char *str)
{
	int i, j;
	char punct[13] = {" \t\n,;.!?\"(){}"};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] >= 'z')
		{
			str[i] = str[i] - 32;

			for (j = 0; j < 13; j++)
			{
				if (str[i] == punct[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] = str[i + 1] - 32;
					}
				}
			}
		}
	}
	return (str);
}

