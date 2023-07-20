#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: Arguments count
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (op == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d", op(atoi(argv[1]), atoi(argv([3]))));

	return (0);
}
