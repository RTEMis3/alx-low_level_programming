#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - checks code
 * @dest: parameter
 * @src: parameter
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int b;
	
	for (b = 0; src[b]; b++)
	{
	dest[b] = src[b];
	}
	dest[b] = src[b];
	return (dest);
}
