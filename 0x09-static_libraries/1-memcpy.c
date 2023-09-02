#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: no. of bytes to be copied
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}
	return (dest);
}
