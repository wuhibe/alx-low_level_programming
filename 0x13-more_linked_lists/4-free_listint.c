#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list.
 * @head: head of linked lists
 * Return: None.
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
