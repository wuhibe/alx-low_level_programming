#include "holberton.h"
/**
 * swap_int - Function to swap values of two ints
 *
 * @a: First int
 * @b: Second int
 */
void swap_int(int *a, int *b)
{
int x,y;
x = *a;
y = *b;
*a = y;
*b = x;
}
