#include "holberton.h"
/**
 * _isdigit - Function to test digits
 *
 * @c: Variable to test
 *
 * Return: 1 if it's a digit, 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
