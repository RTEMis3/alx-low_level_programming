#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - puts recursion in the code
 * Return: Always (0).
 * @s: variable
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
