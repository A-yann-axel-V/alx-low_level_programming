#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *sep;

	if (separator == NULL)
		sep = "";

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", sep);
		}
		printf("\n");
	}

	va_end;
}
