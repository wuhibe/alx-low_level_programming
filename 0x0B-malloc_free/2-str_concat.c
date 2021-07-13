#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == '\0')
		return ('\0');
	while (s1[i] != '\0')
		s[i] = s1[i], i++;
	while (s2[j] != '\0')
		s[i] = s2[j], i++, j++;
	s[i] = '\0';
	return (s);
}
