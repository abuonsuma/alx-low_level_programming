#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;
	unsigned int r;

	if (index > 64)
		return (-1);
	r = index;
	for (q = 1; r > 0; q *= 2, r--)
		;

	if ((*n >> index) & 1)
		*n = *n - q;

	return (1);
}
