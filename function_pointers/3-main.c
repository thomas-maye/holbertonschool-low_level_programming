#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - the principal fonction
 * @argc: the number of command-line
 * @argv: the array of command-line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator ==  '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}
