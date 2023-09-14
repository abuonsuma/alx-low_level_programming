#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int q;
	va_list vl;

	va_start(vl, n);

	for (q = 0; q < n; q++)
	{
		if (!separator)
			printf("%d", va_arg(vl, int));
		else if (separator && q == 0)
			printf("%d", va_arg(vl, int));
		else
			printf("%s%d", separator, va_arg(vl, int));
	}

	va_end(vl);

	printf("\n");
}
