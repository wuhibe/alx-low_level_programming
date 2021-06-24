#include "holberton.h"
/**
 * print_diagonal - Function to print a diagonal line of n length
 *
 * @n: Variable for length of line
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
char i;
char x;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (x = 0; x <= i; x++)
{
if (i != x)
_putchar(' ');
else
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
