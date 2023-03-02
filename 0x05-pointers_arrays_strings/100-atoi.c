#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks the code
 * @s: variable
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c;
	int h, j;

	h = 0;
	j = -1;
	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == '-')
	{
	j *= -1;
	}
	if (s[c] > 47 && s[c] < 58)
	{
	if (h < 0)
	{
	h = (h * 10) - (s[c] - '0');
	}
	if (s[c + 1] < 48 || s[c + 1] > 57)
	{
	break;
	}
	}
	}
	if (j < 0)
	{
	h *= -1;
	}
	return (h);
}
