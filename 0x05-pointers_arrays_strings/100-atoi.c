#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks the code
 * @s: variable
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c, d, e, a, f, g;

	c = 0;
	d = 0;
	e = 0;
	a = 0;
	f = 0;
	g = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	while (c < a && f == 0)
	{
	if (s[c] == '-')
	{
	++d;
	}
	if (s[c] >= '0' && s[c] <= '9')
	{
	g = s[c] - '0';
	}
	if (d % 2)
	{
	g = -g;
	e = e * 10 + g;
	f = 1;
	if (s[c + 1] < '0' || s[c + 1] > '9']
	{
	break;
	}
	f = 0;
	}
	c++;
	}
	if (f == 0)
	{
	return (0);
	}
	return (e);
}
