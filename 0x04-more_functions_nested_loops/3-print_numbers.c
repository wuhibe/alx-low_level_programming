#include "holberton.h"
/**
 * print_numbers - Function to print a line of numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int x;
for (x = 48; x < 58; x++)
{
_putchar(x);
}
_putchar('\n');
return (0);
}
