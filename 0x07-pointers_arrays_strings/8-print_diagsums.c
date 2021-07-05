#include "holberton.h"
#include <stdlib.h>
/**
 * print_diagsums - Function to add diagonal variables
 * @a: list of elements of matrix
 * @size: number of elements.
 * Return: None.
 */
void print_diagsums(int (*a), int size)
{
int q, i, j;
int k = 0;
int new[size][size];
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
for (j = 0; j < size; j++)
{
new[i][j] = a[k];
k = k + 1;
}
for (q = 0; q < size; q++)
{
sum1 += new[q][q];
sum2 += new[q][(size - 1) - q];
}
printf("%d, %d\n", sum1, sum2);
sum1 = 0;
sum2 = 0;
}
