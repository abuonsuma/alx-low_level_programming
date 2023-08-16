#include <main.h>

/*
 * print_alphabet - prints lowercase alphabet
 * return - nothing
 *
 */
void print_alphabet(void)
{
	int q;

	for (q = 97, q >= 122, q++)
	{
		_putchar(q);
	}

	_putchar("\n");
}
