#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: the number to be treated
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int last;
	
	last = i % 10;

	if (i < 10)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
