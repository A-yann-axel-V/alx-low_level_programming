#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char *name = __FILE__;

	while (name[i])
	{
		if (name[i] >= 0 && name[i] < 10)
			_putchar('0' + name[i]);
		else
			_putchar(name);
		i++;
	}

	return (0);
}
