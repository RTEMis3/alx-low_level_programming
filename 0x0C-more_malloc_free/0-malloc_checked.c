#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check if malloc library is assigning memories
 * @b: variable
 * Return: integer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
