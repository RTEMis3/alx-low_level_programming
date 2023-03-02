#include "main.h"
#include <stdio.h>

/**
 * puts2 - checks the code
 * @str: variable.
 */
void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
	{
	c = str[i];
	_putchar(c);
	}
	}
	_putchar('\n');
}
