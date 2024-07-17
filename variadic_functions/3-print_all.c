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
	char *string;

	string = va_arg(s, char*);

	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", va_arg(s, char*));
}

/**
 * print_all - the function that prints all type of characters,
 * numbers, strings
 * @format: is the list of types of arguments passed tothe function
 * Return: void so nothing
 */

void print_all(const char * const format, ...)
{
	all typ[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};

	int i, j;
	char *s;
	va_list arg;

	i = 0;
	j = 0;
	s = "";

	va_start(arg, format);

	while (format == NULL || format[i] != '\0')
	{
		while (typ[j].all)
		{
			if (format[i] == *typ[j].all)
			{
				printf("%s", s);
				typ[j].f(arg);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
