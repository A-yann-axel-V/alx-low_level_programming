#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char strng[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	strcpy(strng, "%d", n);
	char l = strng[-1];
	char f = strng[0];

	if (strcmp(last, "0") != 0 && strcmp(last, first) == -1)
	{
		printf("Last digit of %d is %c and is less than %c and not 0", n, l, f);
	}
	else if (strcmp(last, "0") != 0 && strcmp(last, first) == 1)
	{
		printf("Last digit of %d is %c and is greater than %c", n, l, f);
	}
	else
	{
		printf("Last digit of %d is %c and is 0", n, l);
	}
	return (0);
}
