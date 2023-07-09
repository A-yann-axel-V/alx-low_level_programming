#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
