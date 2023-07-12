#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: parameter
 * @av: grid as parameter
 *
 * Return: A pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, n = 0, k = 0;
	char *strng, *w;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][n] != '\0')
		{
			n++;
		}
		n++;
	}

	strng = (char *)malloc((n + 1) * sizeof(char));
	if (strng == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		w = av[i];
		while (w[k] != '\0')
		{
			strng[j] = w[k];
			k++;
			j++;
		}
		strng[j] = '\n';
	}

	strng[j] = '\0';

	return (strng);
}
