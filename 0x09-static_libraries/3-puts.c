#include "main.h"

/**
 *_puts - prints string followed by newline.
 *@str: pointer to string.
 *
 *Return: void.
 */
void _puts(char *str)
{
	int q;

	q = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		q++;
		str++;
	}
	_putchar('\n');
}
