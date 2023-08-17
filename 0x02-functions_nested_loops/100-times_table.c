#include "main.h"

/**
 *print_times_table - prints tables 1 to n
 *
 *Return: void
*/
void print_times_table(int n)
{
	int q, r, product;

	for (q = 0; q <= n; q++)
	{
		
		for (r = 0; r <= n; r++)
		{
			product = q * r;
			
			if (product < 10 && r != n && r != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			
			else if (product >= 10 && r != n)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			
			else if (product < 10 && r == n && r != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			
			else if (r == 0)
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
