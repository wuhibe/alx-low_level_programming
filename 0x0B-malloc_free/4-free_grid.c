#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d integer grid previously created by alloc_grid
 * @grid: pointer to array of ints
 * @height: height of the grid
 * Return: None.
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
