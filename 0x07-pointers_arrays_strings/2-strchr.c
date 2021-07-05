#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - locate char function
 *
 * @s: starting pointer.
 * @c: char to search.
 * Return: final location of pointer.
 */
char *_strchr(char *s, char c)
{
int i;

while (s[i] != '\0')
{
if (*s == c)
return (s);
s++;
}
if(c == '\0'
{
return (s);
}
	
return ('\0');
}
