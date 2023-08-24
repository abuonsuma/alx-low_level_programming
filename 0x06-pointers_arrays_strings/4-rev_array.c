#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int q, r, tmp;

	r = n - 1;

	for (q = 0; q < n / 2; q++)
	{
		tmp = a[q];
		a[q] = a[r];
		a[r--] = tmp;
	}
}
