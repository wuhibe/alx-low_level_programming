#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space with copy of str
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *s;
	int i = 0, j = 0;

	if (str == '\0')
		return ('\0');
	while (str[i] != '\0')
		i++;
	i = i + 1;
	s = malloc(sizeof(*str) * i);
	if (s == '\0')
		return ('\0');
	while (str[j] != '\0')
		s[j] = str[j], j++;
	return (s);
}
