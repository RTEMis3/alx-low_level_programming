#include "main.h"
#include <stdio.h>

/**
 * _atoi - checks the code
 * @s: variable
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni - 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	c++;
	}
	ni *= min;
	return (ni);
}
