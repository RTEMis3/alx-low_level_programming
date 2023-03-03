#include "main.h"
#include <stdio.h>

/**
 * _strcmp - checks the code
 * @s1: destination string
 * @s2: source string to be copied
 * Return: difference of the first characters that are of diff values
 */
int _strcmp(char *s1, char *s2)
	int j = 0;
	int k = 0;

	while ((s1[j] == s2[k]) && s1[j] != '\0' && s2[k] != '\0')
	{
	j++;
	k++;
	}
	return (s1[j] - s2[k]);
}
