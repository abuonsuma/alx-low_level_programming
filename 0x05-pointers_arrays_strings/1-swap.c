#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *q, int *r)
{
	int a = *q;
	int b = *r;

	*r = a;
	*q = b;
}
