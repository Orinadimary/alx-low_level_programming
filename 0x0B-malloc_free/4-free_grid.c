#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - print a grid of integers
 * @height: height grid
 * @grid: the address of the two dimensional grid
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
