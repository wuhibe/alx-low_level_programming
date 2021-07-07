#include "holberton.h"
/**
 * _pow_recursion - Function to find power value.
 * 
 * @x: base value.
 * @y: superscript value.
 *
 * Return: -1 for errror; 0 for 0; x^y for the rest.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, (y - 1)));
}
