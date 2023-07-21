#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int count = 0, i = 0;
	va_list args;
	char *value;

	va_start(args, format);

	while (format[count])
		count++;

	while (i < count)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(agrs float));
				break;
			case 's':
				value = va_arg(args, char*);
				if (value == NULL)
					value = "(nil)";
				printf("%s", value);
				break;
			default:
				break;
		}
		if (i != count - 1)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
