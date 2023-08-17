#include <stdio.h>

/**
 *main - start of execution
 *
 *Return: 0 always.
 */
int main(void)
{
	long int i, q = 1, r = 2, sum = 0, total = 0;

	for (i = 0; i < 49; i++)
	{
		if ((r % 2 == 0) && (r <= 4000000))
		{
			total = total + r;
		}
		sum = q + r;
		q = r;
		r = sum;

	}
	printf("%ld\n", total);
	return (0);
}
