#include "main.h"

/**
 * times_table - Write a function prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int mult1, mult2, prod;

	for (mult1 = 0; mult1 < 10; mult1++)
	{
		for (mult2 = 0; mult2 < 10; mult2++)
		{
			prod = mult2 * mult1;
			
			if (mult2 == 0)	
			{
				_putchar(prod + '0');
			}

			if (prod < 10 && mult2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} 
			
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
