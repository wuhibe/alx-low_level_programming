#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function to cat arguments.
 * @ac: arg count
 * @av: arg values
 * Return: a pointer or null.
 */
char *argstostr(int ac, char **av)
{
	int size = 0, i, j, k = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	c = (char *)malloc(size * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c[k++] = av[i][j];
		c[k++] = '\n';
	}
	c[k] = '\0';
	return (c);
}
