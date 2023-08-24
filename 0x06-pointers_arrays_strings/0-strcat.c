#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int q, r;

	q = 0;
	r = 0;

	while (dest[q] != '\0')
	q++;

	for (q = 0; src[q] && q < n; q++)
		dest[r] = src[r];
	r++;
	q++;
	}

	dest[r] = src[q]';

	return (dest);
}
