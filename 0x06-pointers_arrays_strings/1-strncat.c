#include "holberton.h"
/**
 * _strncat - Function to concatenate two strings
 * using at most n bytes from src
 * @dest: Destination value
 * @src: Source String
 * @n: Variable number
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
