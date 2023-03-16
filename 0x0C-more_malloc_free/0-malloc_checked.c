#include "main.h"

/**
 * malloc_checked - check if malloc library is assigning memories
 * @b: variable
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
