#include "main.h"

/**
 *_strncpy - a function that copies a string.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be used.
 *Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; q < n && src[q] != '\0'; q++)
		dest[q] = src[q];
		for (q = 0; q < n; q++)
			dest[q] = '\0';

	return (dest);
}
