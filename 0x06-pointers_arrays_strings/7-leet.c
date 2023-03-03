#include "main.h"
#include <stdio.h>

/**
 * leet - checks the code
 * @s: input string to be translated
 * Return: string after conversion of 'leet'
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_it[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (s[i] == letters[j])
	{
	s[i] = leet_it[j];
	}
	}
	}
	return (s);
}
