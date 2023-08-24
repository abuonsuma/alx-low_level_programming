#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] >= 'a' && s[q] <= 'z')
			s[q] = s[q] - 32;
	}

	return (s);
}
