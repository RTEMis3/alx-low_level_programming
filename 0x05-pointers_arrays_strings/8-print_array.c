#include "main.h"
#include <stdio.h>

/**
 * print_array - checks code
 * @a: variable
 * @n: parameter
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b;

	if (n > 0)
	{
	for (b = 0; n > b; b++)
	{
	if (b != n - 1)
	{
	printf("%d, ", a[b]);
	}
	else
	{
	printf("%d", a[b]);
	}
	}
	}
	printf("\n");
}
