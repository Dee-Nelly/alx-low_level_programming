#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a 'listint_t' list
 * @head: the head node of the linked list
 * @index: the index of the node starting from 0
 *
 * Return: the node at the index, otherwise NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
