#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (q = 0; *(s + q); q++)
	{
		for (r = 0; *(accept + r); r++)
		{
			if (*(s + q) == *(accept + r))
				break;
		}
	if (*(accept + r) == '\0')
		break;
	}
	return (q);
}
