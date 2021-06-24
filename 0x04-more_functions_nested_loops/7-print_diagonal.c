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
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
