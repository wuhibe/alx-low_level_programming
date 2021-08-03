#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - prints all integers in a list
 * @h: head of list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
