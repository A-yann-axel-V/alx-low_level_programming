#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 *
 * Return: Pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	if (len2 > n)
		len2 = n;
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + len2] = '\0';

	return (ptr);
}
