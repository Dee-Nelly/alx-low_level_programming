#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to head of list
 * @index: the index of the node to return
 *
 * Return: address of the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_ptr;
	unsigned int i;

	current_ptr = head;
	i = 0;

	while (current_ptr != NULL)
	{
		if (i == index)
			return (current_ptr);
		current_ptr = current_ptr->next;
		++i;
	}
	return (NULL);
}
