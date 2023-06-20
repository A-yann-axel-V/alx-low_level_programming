#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * Return: 0 (Success)
 * Return: 1 (Failure)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
