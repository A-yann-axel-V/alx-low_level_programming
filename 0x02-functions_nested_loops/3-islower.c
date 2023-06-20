#include "main.h"

/**
 * _islower - Checks for lowercase character
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
