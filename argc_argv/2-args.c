#include <stdio.h>

/**
 * main - the principal function
 * @argv: the number of command line
 * @argc: the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
