#include "main.h"

/**
 * print_square - print a square using the character #
 * @size: is the size of the square
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int q, r;

		for (q = 1; q <= size; q++)
		{
			for (r = 1; r <= size; r++)
				_puchar('#');
			_putchar('\n');
		}
	}

}
