#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - checks the code
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int leng = strlen(src);
	int len = strlen(dest);

	for (i = 0; i < leng; i++)
	{
	dest[len] = src[i];
	len++;
	}
	return (dest);
}
