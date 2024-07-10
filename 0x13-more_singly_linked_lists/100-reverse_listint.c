#include "lists.h"

/**
 * reverse_listint - reverses a 'listint_t' linked list
 * @head: pointer to head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *curr_node = *head;

	*head = NULL;

	while (curr_node != NULL)
	{
		temp = temp->next;
		curr_node->next = *head;
		*head = curr_node;
		curr_node = temp;
	}
	return (*head);
}
