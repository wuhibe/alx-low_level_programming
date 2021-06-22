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
for (b = 0; b <= n; b++)
{
c = a * b;
printf("%d", c);
while (c < n)
{
printf(",  ");
}
}
printf("\n");
}
}
