#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 *
 * Return: Pointer (Success) || NULL (Fail)
 */

char *str_concat(char *s1, char *s2)
{
	int k = 0, l = 0, i;
	char *strng;

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[k] != '\0')
			k++;

		while (s2[l] != '\0')
			l++;
	}
	else
		return (NULL);

	strng = (char *)malloc(((k + l) * sizeof(char)) + 1);
	if (strng == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		strng[i] = s1[i];
	for (i = 0; i < l; i++)
		strng[k + i] = s2[i];

	strng[k + l] = '\0';

	return (strng);
}
