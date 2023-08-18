#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	if(n <= 0)
		_putchar('\n');
	else
	{
		int q, r;

		for(q = 0; q < n; q++)
		{
			for (r = 0; r <= q; r++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

