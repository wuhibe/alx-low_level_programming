#include "holberton.h"
#include <stdio.h>
/**
*print_times_table - that prints the 9 times table
*@n: variable taken
*Return: no return
*/
void print_times_table(int n)
{
int a, b, c;
for (a = 0; a <= n; a++)
{
_putchar(48);
for (b = 1; b <= n; b++)
{
c = a * b;
_putchar(44);
_putchar(32);
if (c <= n)
{
printf("%i ", c);
}
else
{
printf("%i ", c);
}
}
_putchar('\n');
}
}
