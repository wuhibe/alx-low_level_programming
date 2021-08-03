#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: head of list
 * @n: new int to add to list
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *top = (listint_t *)malloc(sizeof(listint_t));
	listint_t *bottom = (*head);

	if (top == NULL)
		return (NULL);

	top->n = n;
	top->next = NULL;

	if (*head == NULL)
	{
		*head = top;
		return (*head);
	}

	while (bottom->next)
		bottom = bottom->next;

	bottom->next = top;

	return (top);
}
