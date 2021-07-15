#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function to create array of integers
 *
 * @min: min range
 * @max: max range
 *
 * Return: pointer to new array or NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	p = (int *)malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
