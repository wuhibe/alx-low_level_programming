#include "holberton.h"
/**
 * more_numbers - Function to print a matrix of numbers
 *
 * Return: None.
 */
void more_numbers(void)
{
int i;
char x;
for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
