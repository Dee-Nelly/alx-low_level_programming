#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specified index in a list
 * @head: double pointer pointing to head of list
 * @index: the index at which to delete a node
 *
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (i < (index - 1))
	{
		if ((temp_node == NULL) || ((temp_node->next) == NULL))
			return (-1);
		temp_node = temp_node->next;
		i++;
	}

	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);
	return (1);
}
