#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int q = 0;

	while (s[q])
	{
		if (s[q] < '0' || s[q] > '9')
			return (0);
		q++;
	}
	return (1);
}

/**
 * _strlen - returns the string length
 * @s: string evaluated
 * Return: the string length
 */
int _strlen(char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}
	return (q);
}

/**
 * errors - handles main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, q, carry, digit1, digit2, *result;
	int a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (q = 0; q <= len1 + len2; q++)
		result[q] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (q = 0; q < len - 1; q++)
	{
		if (result[q])
			a = 1;
		if (a)
			_putchar(result[q] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
