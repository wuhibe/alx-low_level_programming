#include "holberton.h"
/**
 * _puts - Function to print a string with a new line
 *
 * @str: String input
 */
void _puts(char *str)
{
int x = 0;
while (*str != '\0')
{
_putchar(str[x];
x++;
}
_putchar('\n');
}
