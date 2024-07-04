#include <stdio.h>
#include <stdlib.h>

/**
 * main - the principal function
 * @argc: the number of command-line
 * @argv: the array of command-line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
