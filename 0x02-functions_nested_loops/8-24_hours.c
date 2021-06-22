#include "holberton.h"
/**
 *jack_bauer - print every minute
 *
 *Return: Always 0.
 */
void jack_bauer(void)
{
int h, m, x, y, a, b;
for (h = 0; h < 24; h++)
{
x = h / 10;
y = h % 10;
for (m = 0; m < 60; m++)
{
a = m / 10;
b = m % 10;
_putchar('0' + x);
_putchar('0' + y);
_putchar(':');
_putchar('0' + a);
_putchar('0' + b);
_putchar('\n');
}
}
}
