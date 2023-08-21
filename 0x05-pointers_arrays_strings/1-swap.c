#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int q = *a;
	int r = *b;

	*b = r;
	*a = q;
}
