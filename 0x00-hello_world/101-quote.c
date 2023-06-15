#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msg[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t n = strlen(msg);

	write(STDOUT_FILENO, msg, n);
	return (1);
}
