#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int q, sum1 = 0, sum2 = 0;

	for (q = 0; q < (size * size); q++)
	{
		if (q % (size + 1) == 0)
			sum1 += *(a + q);
		if (q % (size - 1) == 0 && q != 0 && q < size * size - 1)
			sum2 += *(a + q);
	}
	printf("%d, %d\n", sum1, sum2);
}
