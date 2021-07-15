#include "holberton.h"
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
	char *strDup;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strDup = malloc(sizeof(char) * (i + n));
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (k = 0; k < i; k++)
	{
		strDup[k] = s1[k];
	}
	if (j < n)
	{
	for (k = 0; k < j; k++)
	{
		strDup[i + k] = s2[k];
	}
	strDup[(i + j)] = '\0';
	}
	else
	{
		for (k = 0; k < n; k++)
			strDup[i + k] = s2[k];
	}
	return (strDup);
}
