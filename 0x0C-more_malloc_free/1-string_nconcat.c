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
	int i = 0, j, len, len1, len2;

	while (s1[i] != '\0')
		i++;

	len1 = i;
	i = 0;

	while (s2[i] != '\0')
		i++;

	len2 = i;
	len = len1 + len2;
	ptr = (char *)malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
	{
		ptr[++i] = s2[j];
	}

	ptr[++j] = '\0';

	return (ptr);
}
