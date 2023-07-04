#include "main.h"
#include <stddef.h>

/**
 * _strstr -  finds the first occurrence of
 * the substring @needle in the string @haystack
 *
 * @needle: the sub-string to be searched in the main string
 * @haystack: the main string to be examined
 *
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (haystack[i] != '\0')
	{
		if ((haystack[i] == needle[0]) && needle[k] != '\0')
		{
			if (haystack[i + k] == needle[k])
				k++;
			else
				break;
		}

		if (needle[k] != '\0')
		{
			i++;
			k = 0;
		}
		else
			return (haystack + 1);
	}

	return (NULL);
}
