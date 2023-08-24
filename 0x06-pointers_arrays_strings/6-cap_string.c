#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int q, r;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (q = 0; s[q] != '\0'; q++)
	{
		if (q == 0 && s[q] >= 'a' && s[q] <= 'z')
			s[q] -= 32;

		for (r = 0; r < 13; r++)
		{
			if (s[q] == spe[r])
			{
				if (s[q + 1] >= 'a' && s[q + 1] <= 'z')
				{
					s[q + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
