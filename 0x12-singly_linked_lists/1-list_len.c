#include "lists.h"
/**
 * list_len - counts the number of lists
 *
 * @h: head of list
 *
 * Return: count of list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
