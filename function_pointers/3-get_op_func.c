#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - the function that selects the correct function
 * @s : the operator
 * Return: the pointer to the function that correspond to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (*ops[i].f);
		}
		i++;
	}
	return (0);
}
