#include "main.h"
#include <stdio.h>

/**
 * _strcat - checks the code
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dest[dlenn] = src[i];
	dlen++;
	}
	dest[dlen] = '\n';
	return (dest);
}
