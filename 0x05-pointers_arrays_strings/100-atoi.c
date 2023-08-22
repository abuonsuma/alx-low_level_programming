#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, r, x, len, f, digit;

	q = 0;
	r = 0;
	x = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && f == 0)
	{
		if (s[q] == '-')
			++r;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (r % 2)
				digit = -digit;
			x = x * 10 + digit;
			f = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			f = 0;
		}
		q++;
	}

	if (f == 0)
		return (0);

	return (n);
}
