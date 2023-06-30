#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char*
 * @s2: char*
 * Return: 15 (first greater than second)
 * 	-15 (second greater than first)
 *  	0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int r;

	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] > s2[count])
			return (15);
		else if (s1[count] < s2[count])
			return (-15);
		else
			return (0);
	}
}
