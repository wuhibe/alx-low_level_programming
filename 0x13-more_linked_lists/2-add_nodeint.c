#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function to add node on a list
 * @head: pointer to the head of the list
 * @n: new int to be added
 * Return: new pointer to list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = (listint_t *)malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;

	h->next = (*head);
	(*head) = h;

	return (h);
}
