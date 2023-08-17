#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: input character
 *
 *Return: 1 if a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	int upperCase;
	int lowercase;

	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			if (c == upperCase || c == lowerCase)
				return (1);
		}
	}
	return (0);
}
