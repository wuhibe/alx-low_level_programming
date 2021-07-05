#include "holberton.h"
/**
 * _memset - Function to fill mem with constant
 * @s: memory location
 * @b: char to fill
 * @n: number of elements
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
int x;
for (x = 0; x < n; x++)
{
*s = b;
s++;
}
return (s);
}
