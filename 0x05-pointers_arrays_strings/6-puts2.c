#include "main.h"
#include <stdio.h>

/**
 * puts2 - checks the code
 * @str: variable.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
