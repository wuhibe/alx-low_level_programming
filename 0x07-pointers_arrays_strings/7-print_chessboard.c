#include "holberton.h"
/**
 * print_chessboard - Function to print out a chessboard.
 *
 * @a: array input.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar('%c', a[i][j]);

}
_putchar('\n');
}
}
