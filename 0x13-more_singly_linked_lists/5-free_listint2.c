#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
