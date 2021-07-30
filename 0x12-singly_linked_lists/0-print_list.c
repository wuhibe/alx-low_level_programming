#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: head of list
 * Return: number of lists
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
