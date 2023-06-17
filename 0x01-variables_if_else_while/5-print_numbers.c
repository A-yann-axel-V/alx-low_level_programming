#include <sdtio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i + 1);
		i += 1;
	}
}
