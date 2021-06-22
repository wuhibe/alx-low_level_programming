#include "holberton.h"
/**
 *print_to_98 - print all ints to 98
 *
 *@n: variable to start counting from
 *
 *Return: none
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
_putchar(n);
_putchar(",");
_putchar(" ");
}
}
else
{
for (; n <= 98; n++)
{
_putchar(n);
_putchar(",");
_putchar(" ");
}
}
}
