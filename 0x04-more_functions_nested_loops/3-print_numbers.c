#include "holberton.h"
/**
 * print_numbers - Function to print a line of numbers
 *
 * Return: None.
 */
void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
_putchar(x);
}
_putchar('\n');
}
