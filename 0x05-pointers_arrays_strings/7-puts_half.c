#include "main.h"

/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *Return: void.
 */
void puts_half(char *str)
{
	int q, r, total = 0;

	for (q = 0; str[q] != '\0'; q++)
		total++;
	r = (total -1)/2;
	for (q = r + 1; str[1] != '\0'; q++)
		_putchar(str[q]);
	_putchar('\n');
}
