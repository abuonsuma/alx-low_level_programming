#include <stdio.h>

/**
 *main - print first 98 fibonacci numbers
 *
 *Return: 0(Success)
 */

int main(void)
{
	long int i, q = 1, r = 2, sum = 0;

	for (i = 0; i < 97; i++)
	{
		printf("%lu, ", q);
		sum = q + r;
		q = r;
		r = sum;
		if (i == 96)
			printf("%lu\n", q);
	}

	return (0);
}
