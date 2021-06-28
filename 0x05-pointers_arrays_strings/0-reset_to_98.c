#include "holberton.h"
/**
 * reset_to_98 - Function to reset value of n to 98.
 *
 * @n: variable received from main
 *
 * Return: None.
 */
void reset_to_98(int n)
{
int n = 98;
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
