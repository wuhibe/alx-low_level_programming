#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: new uint or 0 for error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (i = 1; i <= _strlen(b); i++)
	{
		if (b[i - 1] == 49)
			n = power_func(_strlen(b) - i);
		else if (b[i - 1] == 48)
			n = 0;
		else
			return (0);
		total += n;
	}

	return (total);
}
/**
 * _strlen - function to count chars in a string
 * @str: pointer to start of string
 * Return: count of chars
 */
int _strlen(const char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	return (count);
}

/**
 * power_func - function to calculate 2^n
 * @n: superscript
 * Return: 2^n
 */
unsigned int power_func(int n)
{
	unsigned int j = 1;

	if (n == 0)
		return (1);

	while (n > 0)
	{
		j = j * 2;
		n--;
	}
	return (j);
}
