#include "holberton.h"
/**
 * print_square - Function to print a square of #
 *
 * @size: Variable for the dimensions of the square
 *
 */
void print_square(int size)
{
int n, m;
if (size <= 0)
_putchar('\n');
else
{
for (n = 0; n < size; n++)
{
for (m = 0; m < size; m++)
_putchar('#');
_putchar('\n');
}
}
}
