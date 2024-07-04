#include <stdio.h>

/**
 * main - the main function
 * @argc: the number of command line
 * @argv: the arrays wich content command line argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
