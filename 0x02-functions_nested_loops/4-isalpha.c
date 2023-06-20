#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 (Success) or 0 (Failure)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
