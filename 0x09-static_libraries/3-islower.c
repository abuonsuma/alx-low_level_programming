#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: input character to be checked
 *
 *Return: 1 if c is lower, 0 otherwise
 */

int _islower(int c)
{
	int q;

	for (q = 'a'; q <= 'z'; q++)
	{
		if (c == q)
			return (1);
	}
	return (0);
}
