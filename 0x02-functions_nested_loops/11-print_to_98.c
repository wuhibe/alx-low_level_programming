#include "holberton.h"
#include <stdio.h>
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
for (; n > 98; n--)
{
printf("%i, ", n);
printf("98\n");
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
printf("%i, ", n);
printf("98\n");
}
}
else
printf("98\n");
}
}
