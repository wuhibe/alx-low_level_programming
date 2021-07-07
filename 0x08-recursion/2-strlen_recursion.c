#include "holberton.h"
/**
 * _strlen_recursion - Function to print length of string
 *
 * @s: String pointer
 *
 * Return: None.
 */
void _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

_putchar(_strlen_recursion(s + 1) + 1);

}
