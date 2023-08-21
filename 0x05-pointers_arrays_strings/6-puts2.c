#include "main.h"

/**
 *puts2 - prints very other character in string.
 *@str: pointer to string.
 *Return: void.
 */
void puts2(char *str)
{
	int q;

	q = 0;
	while (str[q] != '\0')
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
		q++;
	}
	_putchar('\n');
}
