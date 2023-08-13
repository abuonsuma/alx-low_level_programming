#include <stdio.h>

/**
 *main - Start of program execution
 /*
  *loop for numbers 0-9
  *if number is 0-9, print number
  *then if number is 0-8, add comma plus space
  *else if number is 9, add only space
  *Return: 0(Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num >= '0')
		{
			putchar(num);
			if (num >= '0' && num <= '8')
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	return (0);
}
