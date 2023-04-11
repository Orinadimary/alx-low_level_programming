#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width grid
 * @height: height grid
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **dimen;
	int i, n;

	if (width <= 0 || height <= 0)

		return (NULL);
	dimen = malloc(sizeof(int *) * height);
	if (dimen == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dimen[i] = malloc(sizeof(int) * width);
		if (dimen[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dimen[i]);
	free(dimen);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)

			dimen[i][n] = 0;
	}
	return (dimen);

}
