#include "holberton.h"
/**
 *_abs - Calculate absolute value of int
 *
 *@r: variable to check absolute value
 *
 *Return: Always 0.
 */
int _abs(int r)
{
if (r < 0)
return (-r);
else
return (r);
}
