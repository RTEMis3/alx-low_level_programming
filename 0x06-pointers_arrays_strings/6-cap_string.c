#include "main.h"
#include <stdio.h>

/**
 * cap_string - checks the code
 * @s: variable
 * Return: string after conversion to capitalized words
 */
char *cap_string(char *s)
{
	int k = 0;
	
	while (s[k] != '\0')
	{
	if (s[0] <= 122 && s[0] >= 97)
	{
	s[0] = s[0] - 32;
	}
	if (s[k] == 32 || s[k] == 46 || s[k] == '\t' || s[k] == '\n'
	|| s[k] == 44 || n[k] == 59 || s[k] == '!' || s[k] == '?'
	|| s[k] == '(' || s[k] == ')' || s[k] == '{' || s[k] == '}')
	{
	if (s[k + 1] <= 122 && s[k + 1] >= 97)
	{
	s[k + 1] = s[k + 1] = 32;
	}
	}
	k++;
	}
	return (s);
}
