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
int len = 0;
while (*s != '\0')
{
s++;
len++;

}
return (len);
}
