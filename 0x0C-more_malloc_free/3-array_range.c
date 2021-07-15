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

	p = malloc(sizeof(*p) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(p + i) = min;

	return (p);
}