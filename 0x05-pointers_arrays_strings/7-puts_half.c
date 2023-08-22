#include "main.h"

/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *Return: void.
 */
void puts_half(char *str)
{
	int q, r, s;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}

	if (r % 2 == 0)
	{
		s = r / 2;
		for (q = s; q < r; q++)
		{
			_putchar(str[q]);
		}
	}
	else
	{
		s = (r - 1) / 2;
		for (q = s + 1; q < r; r++)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');
}
