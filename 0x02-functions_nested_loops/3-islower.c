#include "holberton.h"
/**
 *_islower - Program starts here
 *
 *@c: character in ASCII code.
 *
 *Return: 1 for lowercase, 0 for uppercase.
 */

int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
