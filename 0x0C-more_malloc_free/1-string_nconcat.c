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
	int i = 0, j, len, len1 = 0, len2 = 0;
	
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

	len = len1 + len2;
	ptr = (char *)malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len] = '\0';

	return (ptr);
}
