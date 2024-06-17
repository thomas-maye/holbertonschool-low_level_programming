# include <stdio.h>
/**
 * main - principal fonction
 *
 * Return: fonction void so 0
 */

int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));

	return (0);
}
