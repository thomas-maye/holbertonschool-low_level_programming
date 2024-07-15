#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name of the person
 * @f: pointer of the function
 * Return : void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}

}
