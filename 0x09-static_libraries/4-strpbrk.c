#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input string
 *Return: pointer to the byte in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int q, r;
	char *z;

	z = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		for (r = 0; accept[r]; r++)
		{
			if (accept[r] == s[q])
			{
				z = &s[q];
				return (z);
			}
		}
	}
	return (z);
}
