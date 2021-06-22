#include "holberton.h"
/**
 * print_alphabet_x10 - program starts here
 *
 * Return: always 0
 */
int print_alphabet_x10(void)
{
int x;
for (x = 0; x < 10; x++)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');
}
return (0);
}
