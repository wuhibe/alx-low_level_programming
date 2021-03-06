#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct node - singly linked list
 * @str: string value
 * @len: length of string
 * @next: next value
 */
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
