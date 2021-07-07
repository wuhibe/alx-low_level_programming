#include "holberton.h"
/**
0;276;0c * _strlen_recursion - Function to return length of string
 *
 * @s: String pointer
 *
 * Return: Length.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen_recursion(s + 1) + 1);
}
