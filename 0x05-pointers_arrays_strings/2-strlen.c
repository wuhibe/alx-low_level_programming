#include "holberton.h"
/**
 * _strlen - Function to print length of string
 *
 * @s: Input string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len;
while (*s != 0)
{
len++;

}
_putchar ((len / 10) + '0');
_putchar ((len % 10) + '0');
return (0);
}
