#include "holberton.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination var
 *@src: source of mem
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;

while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
