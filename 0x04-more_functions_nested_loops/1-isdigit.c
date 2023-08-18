#include "main.h"

/**
 * isdigit - checks for 0 through 9
 * @c - parameter
 * return: 1 successful, 0 unsuccessful
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
