#include "main.h"
#include <stdio.h>

/**
 * cap_string - checks the code
 * @s: variable
 * Return: string after conversion to capitalized words
 */
char *cap_string(char *s)
{
	int i;
	
	if (s[0] > 96 && s[0] < 123)
	{
	s[0] -= 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	switch (s[i])
	{
	case ' ': case '\n': case '\t': case ',':
	case ';': case '.': case '!': case '?': case '"':
	case '(': case ')': case '{': case '}':
	{
	if (s[i + 1] > 96 && s[i + 1] < 123)
	{
	s[i + 1] -= 32;
	}
	}
	}
	}
	return (s);
}
