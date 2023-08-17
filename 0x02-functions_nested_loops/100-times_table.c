#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int product, result, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (result = 1; result <= n; ++result)
			{
				_putchar(',');
				_putchar(' ');

				product = num * result;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				} else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

