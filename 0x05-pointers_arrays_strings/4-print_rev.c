#include "holberton.h"
/**
 * print_rev - Function to print strings in reverse.
 *
 * @s: Input string
 */
void print_rev(char *s)
{
int str;
for (str = 0; s[str] != '\0'; str++)
{
}
for (str = str - 1; str >= 0; str--)
{
_putchar(s[str]);
}
_putchar('\n');

}
