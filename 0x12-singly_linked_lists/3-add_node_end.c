#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of a singly linked list
 * @head: double pointer pointing to the head of the list
 * @str: pointer to a string at a node
 *
 * Return: address of the new element, otherwise NULL on error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
