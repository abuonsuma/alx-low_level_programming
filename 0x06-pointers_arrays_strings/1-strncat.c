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
	int q = 0, r = 0;

	while (dest[q++])
	q++;
	for (q = 0; src[q] && q < n; q++)
	dest[r++] = src[q];
	return (dest);
}
