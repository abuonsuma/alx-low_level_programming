#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int q;
int times;


times = 0;
while (times < 10)
{
for (q = 'a' ; q <= 'z'; q++)
{
_putchar(q);
}

times++;
_putchar('\n');
}


}
