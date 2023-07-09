#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 (Success) 1 (Failure)
 */

int main(int argc, char *argv[])
{
	int coin = 0, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	coin = number / 25;
	number %= 25;

	coin += number / 10;
	number %= 10;

	coin += number / 5;
	number %= 5;

	coin += number / 2;
	number %= 2;
	coin += number;

	printf("%d\n", coin);
	return (0);
}
