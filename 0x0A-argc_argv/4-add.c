#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 (Success) 1 (Failure)
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int i, n;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}

		n = atoi(argv[i]);
		count += n;
	}

	printf("%d\n", count);
	return (0);
}
