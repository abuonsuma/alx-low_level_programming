#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int q = 0, r = 0;

	while (dest[q] != '\0')
		q++;

	while (src[r] != '\0')
	{
		dest[q] = src[r];
		r++;
		q++;
	}

	dest[q] = '\0';

	return (dest);
}
