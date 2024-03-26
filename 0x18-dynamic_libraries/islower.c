#include "main.h"

/**
 * _islower - Checks for lowercase of character
 * @c: Character to be checked
 *
 * Return: 1 (Success) or 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
