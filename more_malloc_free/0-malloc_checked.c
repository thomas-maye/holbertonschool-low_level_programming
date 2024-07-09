#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b: is thr memory allocated
 * Return: 98 if the allocated is failed, p if is ok
 */

void *malloc_checked(unsigned int b)
{
	void *p; /* p : pointers */

	p = malloc(b); /* returns a pointer to an allocated memory */

	if (p == NULL) /* verify if the memory is allocated */
	{
		exit (98); /* return 98 if the allocated memory is failed */
	}
	return (p); /* return p, the allocated memory */
}
