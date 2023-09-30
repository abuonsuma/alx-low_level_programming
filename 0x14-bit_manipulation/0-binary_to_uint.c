#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int q, r;
	int s;

	if (b == NULL)
		return (0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}

	for (q = 1, r = 0, s--; s >= 0; s--, q *= 2)
	{
		if (b[s] == '1')
			r = q + r;
	}

	return (r);
}
