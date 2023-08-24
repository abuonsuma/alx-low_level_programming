#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int q, r;

	q = 0;
	r = 0;

	while (dest[q] != '\0')
		q++;

	while (src[q] != '\0' && r < n)
	{
		dest[q] = src[r];
		q++;
		r++;
	}

	dest[q] = '\0';

	return (dest);
}
