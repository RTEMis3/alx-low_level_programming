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
	char s;

	_puts_recursion("%c\nPuts with recursion", s);
}
