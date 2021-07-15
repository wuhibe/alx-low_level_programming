#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function to concatenate two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes
 *
 * Return: pointer to new space or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *concat;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	if (j > n)
		j = n;
	concat = malloc(sizeof(char) * (i + j +1));
	if (concat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	for (k = 0; k < j; k++)
		concat[k + i] = s2[k];
	concat[i + j] = '\0';
	return (concat);
}
