#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero (success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
