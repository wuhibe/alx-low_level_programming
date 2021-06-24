#include "holberton.h"
/**
 * print_numbers - Function to print a line of numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
_putchar("%d", x);
}
_putchar('\n');
return (0);
}
