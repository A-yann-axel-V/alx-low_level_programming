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
	unsigned int i = 0, k = 0;
	
	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if ((haystack[i] == needle[0]) && needle[k])
		{
			if (haystack[i + k] == needle[k])
				k++;
			else
				break;
		}

		if (needle[k])
		{
			i++;
			k = 0;
		}
		else
			return (haystack + i);
	}

	return (NULL);
}
