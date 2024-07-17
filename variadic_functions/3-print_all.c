#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - the function that print characters
 * @c: character
 * Return : void so nothing
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - the function that print integer
 * @i: integer
 * Return : void so nothing
 */

void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - the function that print float
 * @f: float
 * Return : void so nothing
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - the function that print strings
 * @s: char * (strings)
 * Return : void so nothing
 */

void print_string(va_list s)
{
	char *str = va_arg(s, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - the function that prints all type of characters,
 * numbers, strings
 * @format: is the list of types of arguments passed tothe function
 * Return: void so nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	all typ[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (typ[j].all)
		{
			if (format[i] == *typ[j].all)
			{
				printf("%s", sep);
				typ[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
