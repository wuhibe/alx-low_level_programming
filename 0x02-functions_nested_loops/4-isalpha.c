#include "holberton.h"
/**
 *_isalpha - Check if c is alphabet
 *
 *@c: character in ASCII code.
 *
 *Return: 1 if c is alpha, 0 if not.
 */

int _isalpha(int c)
{
if (c > 64 && c < 123)
return (1);
else
return (0);
}
