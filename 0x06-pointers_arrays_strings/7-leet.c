#include "main.h"

/**
 * leet - encodes a string in 1337
 *
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int q, r;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (r = 0; r < 10; r++)
		{
			if (s[q] == a[r])
			{
				s[q] = b[r];
			}
		}
	}

	return (s);
}
