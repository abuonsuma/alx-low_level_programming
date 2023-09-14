#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all parameters
 * @n: number of arguments passed to the function
 * Return: summation result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int q;
	int sum = 0;
	va_list vl;

	va_start(vl, n);

	for (q = 0; q < n; q++)
		sum += va_arg(vl, int);

	va_end(vl);

	return (sum);
}
