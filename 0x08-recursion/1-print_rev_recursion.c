#include "holberton.h"
/**
 * _print_rev_recursion - Function to print string in reverse
 *
 * @s: starting point pointer.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{

_print_rev_recursion(s + 1);
_putchar(*s);

}
