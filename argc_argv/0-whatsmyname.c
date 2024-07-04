#include <stdio.h>

/**
 * main - the main function
 * @argc: the number of command line
 * @argv: the arrays wich content command line argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
