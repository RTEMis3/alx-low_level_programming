#include "main.h"

int get_length(char *s);

/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be contatenated upon
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int initial_end;
	int j;

	initial_end = get_length(dest);
	j = 0;
	while (src[j] != '\0')
	{
	dest[initial_end + j] = src[j];
	j++;
	}
	dest[initial_end + j] = '\0';

	return (dest);
}
