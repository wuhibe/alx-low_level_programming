#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Return: void
 */


int print_alphabet(void)
{
	int x = 0;
	char a;
	char b[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (x <= 26)
	{
		a = b[x];
		_putchar(a);
		x++;
	}
	return (0);
}
