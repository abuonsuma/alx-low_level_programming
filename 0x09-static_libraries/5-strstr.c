#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: input string
 *@needle: input string
 *Return: pointer to the beginning of the located substring or NULL
 * if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *q = haystack;
		char *r = needle;

		while (*r && *haystack && *haystack == *r)
		{
			haystack++;
			r++;
		}

		if (!*r)
		{
			return (q);
		}

		haystack = q + 1;
	}
	return (0);
}
