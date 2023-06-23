#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(' ');
	}
	printf("\n");

	return (0);
}
