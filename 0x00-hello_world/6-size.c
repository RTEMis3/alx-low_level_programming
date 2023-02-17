#include <stdio.h>

/**
 * main - Prints the size of each type on the computer
 * Return - Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu bytes \n", (unsignedlong)sizeof(a));
	printf("Size of an int: %lu bytes \n", (unsignedlong)sizeof(b));
	printf("Size of a long int: %lu bytes \n", (unsignedlong)sizeof(c));
	printf("Size of a long long int: %lu bytes \n", (unsignedlong)sizeof(d));
	printf("Size of a float: %lu bytes \n", (unsignedlong)sizeof(d));

	return (0);
}
