#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to to a memory area
 *@b: the byte used to fill
 *@n: the number of bytes to be filled
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}
	return (s);
}
