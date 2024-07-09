#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a 'listint_t' list
 * @head: pointer to head of the list
 * @n: data stored at a node
 *
 * Return: address of new element, otherwise NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *prev_node = *head;
	listint_t *new_node_end = malloc(sizeof(listint_t));

	if (!new_node_end)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (!*head)
	{
		*head = new_node_end;
		return (*head);
	}

	while (prev_node->next)
		prev_node = prev_node->next;
	prev_node->next = new_node_end;
	return (new_node_end);
}
