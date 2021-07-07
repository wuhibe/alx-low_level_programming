#include "holberton.h"
/**
 * _sqrt_recursion - function to return sqrt of a num
 *
 * @n: num to check.
 *
 * Return: the sqrt.
 */
int _sqrt_recursion(int n)
{
	int x = 2;

	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
	{
		chksrqrt(n, x);
		return (x);
	}
}

/**
 * chksqrt - find square root.
 * @n: main var.
 * @x: square root var.
 * Return: Variable x.
 */
int chksqrt(int n, int x)
{
	if (n == (x * x))
		return (x);
	else if (n > (x * x))
	{
		return (-1);
	}

	else
		chksqrt(n, (x + 1))
}
