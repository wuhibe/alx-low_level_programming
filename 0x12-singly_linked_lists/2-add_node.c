#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function to add node on a list
 * @head: pointer to the head of the list
 * @str: value to be added
 * Return: new pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = (list_t *)malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	h->str = strdup(str);
	h->len = _strlen(str);

	h->next = (*head);
	(*head) = h;

	return (h);
}
/**
 * _strlen - function to count chars in a string
 * @str: pointer to start of string
 * Return: count of chars
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}
