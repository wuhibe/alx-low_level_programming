#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid or null
 **/
int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	g = malloc(sizeof(int *) * height);
	if (g == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			while (--i >= 0)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;

	return (g);
}
