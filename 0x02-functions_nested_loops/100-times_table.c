#include "main.h"

/**
 *print_times_table - prints tables 1 to n
 *
 *Return: void
*/
void print_times_table(int n)
{
	int a, b, product;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			product = a * b;
			if (product < 10 && b != n && b != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product >= 10 && b != n)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product < 10 && b == n && b != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (b == 0)
			{
				_putchar('0' + product);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
