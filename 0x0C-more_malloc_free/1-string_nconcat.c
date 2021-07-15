#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function to concatenate 2 strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: either pointer or null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	while (s1[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + n));
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[(i + j)] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
