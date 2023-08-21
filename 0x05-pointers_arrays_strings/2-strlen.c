#include "main.h"

/**
 * _strlen - returns length of a string
 *@s: input string
 *
 *Return: 0(Success)
 */
int _strlen(char *s)
{
	int q;

	q = 0;
	while (*s != '\0')
	{
		q++;
		s++;
	}
	return (q);
}
