#include "main.h"
#include <stdio.h>

/**
 * reverse_array - checks the code
 * @a: input array
 * @n: length of array
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int j, temp, i =n;

	for (i--, j =0; j <n / 2; j++, i--)
	{
	temp = a[j], a[j] = a[i], a[i] = temp;
	}
}
