#include "main.h"
#include <stdio.h>

/**
 * check - checks the code
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
	{
	return (a);
	}
	if (a * a > b)
	{
	return (-1);
	}
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	if (x < 0)
	{
	return (-1);
	}
	else
	{
	return (check(x, n));
	}
}
