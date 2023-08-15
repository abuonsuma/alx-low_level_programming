#include <unistd.h>

/**
 *main - Prints putchar
 *Return: 0(success)
 */
int main(void)
{
	const char msg[] = "_putchar\n";

	write(STDOUT_FILENO, msg, sizeof(msg) - 1);

	return (0);
}
