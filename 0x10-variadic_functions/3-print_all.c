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
	int count = 0, i = 0, put_sep;
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
				printf("%i", va_arg(args, int));
				put_sep = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				put_sep = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				put_sep = 0;
				break;
			case 's':
				value = va_arg(args, char*);
				if (value == NULL)
					value = "(nil)";
				printf("%s", value);
				put_sep = 0;
				break;
			default:
				put_sep = 1;
				break;
		}
		if (i != count - 1 && put_sep == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
