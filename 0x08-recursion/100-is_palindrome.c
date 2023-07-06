#include "main.h"

/**
 * _checker - checks
 * @s: string
 * @n: Integer
 * @k: Integer
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int _checker(char *s, int n, int k)
{
	if (n >= k)
		return (1);
	else if (s[n] != s[p])
		return (0);
	return (_checker(s, (n + 1), (k -1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int slen = _strlen_recursion(s);

	if (slen == 0)
		return (0);
	return (_checker(s, 0, (slen - 1)));
}
