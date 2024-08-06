#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specified position
 * @head: double pointer to head of the list
 * @index: index where to delete node
 *
 * Return: 1 on success and 0 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL)
		return (-1);

	if (head)
	{
		while (index && current)
		{
			current = current->next;
			index--;
		}

		if (index)
			return (-1);

		if (!index && current)
		{
			if (current->next)
				current->next->prev = current->prev;
			if (current->prev)
				current->prev->next = current->next;
			else
				*head = current->next;
			free(current);
			return (1);
		}
	}
	return (-1);
}
