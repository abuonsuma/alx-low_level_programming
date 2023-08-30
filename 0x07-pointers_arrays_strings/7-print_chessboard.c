#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int q, r = 0;

	for (q = 0; q < 64; q++)
	{
		if (q % 8 == 0 && q != 0)
		{
			r = q;
			_putchar('\n');
		}
		_putchar(a[q / 8][q - r]);
	}
	_putchar('\n');
}
