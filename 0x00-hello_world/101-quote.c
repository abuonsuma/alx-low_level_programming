#include <stdio.h>
#include <unistd.h>

/**
 * main - writes to the stderr using
 * description: the program writes to stderr.
 * return: value 1 on success.
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, 59);
	return 1;
}

