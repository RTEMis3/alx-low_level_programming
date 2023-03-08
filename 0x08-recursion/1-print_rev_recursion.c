#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints the reverse of a string
 * @s: variable
 * Return: Always (0).
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
