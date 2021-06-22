#include "holberton.h"
/**
 *print_sign - Code to check sign of int
 *
 *@n: variable to check
 *
 *Return: Always 0.
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}
}
