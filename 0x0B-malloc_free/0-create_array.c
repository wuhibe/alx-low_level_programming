#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
