#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - count of chars in a string
 * @s: pointer to start of string
 * Return: integer value
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: head of list
 * @str: string to add to list
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *top = (list_t *)malloc(sizeof(list_t));
	list_t *bottom = (*head);

	if (top == NULL)
		return (NULL);

	top->str = strdup(str);
	top->len = _strlen(str);
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
