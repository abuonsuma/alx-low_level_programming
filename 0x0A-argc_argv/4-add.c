#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int w, x, y, z, len, digit;

	w = 0;
	x = 0;
	y = 0;
	z = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (w < len && z == 0)
	{
		if (s[w] == '-')
			++y;

		if (s[w] >= '0' && s[w] <= '9')
		{
			digit = s[w] - '0';
			if (d % 2)
				digit = -digit;
			x = x * 10 + digit;
			z = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (x);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, q, r, s;

	sum = 0;

	for (q = 1; q < argc; q++)
	{
		for (r = 0; argv[q][r] != '\0'; r++)
		{
			if (argv[q][r] > '9' || argv[q][r] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (s = 1; s < argc; s++)
	{
		num = _atoi(argv[s]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
