#include<stdio.h>
#include "holberton.h"
/**
 * print_array - Function to print n number of elements from arr a
 * @a: Input Array.
 * @n: Number of elements to print.
 * Return: None.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
