#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - checks the code
 * @y: parameter
 * @x: parameter
 * Return: length of s
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y != 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
