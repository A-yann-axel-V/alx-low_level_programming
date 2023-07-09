#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 1
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d", a * b);
	}

	return (1);
}
