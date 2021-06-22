#include "holberton.h"
/**
 *print_last_digit - Code to print last digit of number
 *
 *@r: variable to check
 *
 *Return: Always 0.
 */
int print_last_digit(int r)
{
int x;
x = r % 10;
if (x < 0)
_putchar(-x + 48);
else
_putchar(x + 48);
return (x);
}
