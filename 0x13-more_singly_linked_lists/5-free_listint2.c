#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: linked list
 *
 */

void free_listint2(listint_t **head)
{
       	if (*head != NULL)
	{
		free_listint2(&(*head)->next);
		*head = (*head)->next;
	}
	head = NULL;
}
