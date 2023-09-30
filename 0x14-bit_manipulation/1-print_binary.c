#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int q;
	int r;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (q = n, r = 0; (q >>= 1) > 0; r++)
		;

	for (; r >= 0; r--)
	{
		if ((n >> r) & 1)
			printf("1");
		else
			printf("0");
	}
}
