#include "main.h"

/**
 *times_table - prints tables 1 to 9
 *
 *Return: void
*/
void times_table(void)
{
	int q, r, product;

	for (q = 0; q <= 9; q++)
	{
		for (r = 0; r <= 9; r++)
		{
			product = q * r;
			if (product < 10 && r != 9 && r != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (prod >= 10 && r != 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product < 10 && r == 9 && r != 0)
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
