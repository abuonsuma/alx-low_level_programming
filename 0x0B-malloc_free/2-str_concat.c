#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int q = 0, r = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	q = 0;
	r = 0;

	if (s1)
	{
		while (q < len1)
		{
			s3[q] = s1[q];
			q++;
		}
	}

	if (s2)
	{
		while (q < (len1 + len2))
		{
			s3[q] = s2[r];
			q++;
			r++;
		}
	}
	s3[r] = '\0';

	return (s3);
}
