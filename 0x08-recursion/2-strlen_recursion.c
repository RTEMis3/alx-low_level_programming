#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: variable
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	int i = 1;
	if (*s !='\0')
	{
	i += _strlen_recursion(s + 1);
	}
	else
	{
	i--;
	}
	return (i);
}
