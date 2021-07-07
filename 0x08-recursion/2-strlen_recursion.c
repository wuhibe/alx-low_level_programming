#include "holberton.h"
/**
 * _strlen_recursion - Function to return length of string
 *
 * @s: String pointer
 *
 * Return: Length.
 */
void _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen_recursion(s + 1) + 1);
}
