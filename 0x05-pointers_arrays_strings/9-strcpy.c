#include "holberton.h"
/**
 * _strcpy - Function to copy string.
 * @dest: Buffer pointer.
 * @src: String pointer.
 * Return: None.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
