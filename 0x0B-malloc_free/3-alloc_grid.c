#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter
 * @height: parameter
 *
 * Return: Pointer (Success) || NULL (Otherwise)
 */

int **alloc_grid(int width, int height)
{
	int **aheight;
	int i, j;

	if ((width * height) <= 0)
		return (NULL);

	aheight = (int *)malloc(height * sizeof(int));
	if (aheight == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		aheight[i] = (int *)malloc(width * sizeof(int));
		if (aheight[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(aheight[i]);
			free(aheight);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			aheight[i][j] = 0;
	}

	return (aheight);
}
