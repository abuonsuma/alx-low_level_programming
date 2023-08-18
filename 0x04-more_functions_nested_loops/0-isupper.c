#include "main.h"

/**
 * _isupper - checks whether c is uppercase
 * @c: input for alphabet
 * Return: 1 if successful, 0 if unsuccessful
 */

int _isupper(int c)
{
	if (c >= A && c <= Z)
		return (1);
	else
		return (0);
}
