#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - Function that returns the sum
 * @a: a number
 * @b: a other number
 * Return: the result of the operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that returns the difference
 * @a: a number
 * @b: a other number
 * Return: the result of the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that returns the product
 * @a: a number
 * @b: a other number
 * Return: the result of the operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that returns the result of the division
 * @a: a number
 * @b: a other number
 * Return: the result of the operation
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that remainder of the division
 * @a: a number
 * @b: a other number
 * Return: the result of the operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
