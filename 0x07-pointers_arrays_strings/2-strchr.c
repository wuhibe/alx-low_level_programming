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

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
s++;
}
if (c == '\0')
{
return (s);
}

return ('\0');
}
