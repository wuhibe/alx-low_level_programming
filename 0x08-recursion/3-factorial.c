#include "holberton.h"
/**
 * factorial - Function to calculate factorial of a num.
 *
 * @n: input num.
 *
 * Return: -1 for error; 1 for 0; num! for the rest.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
