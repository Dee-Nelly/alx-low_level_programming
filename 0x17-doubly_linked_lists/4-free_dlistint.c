#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_ptr;

	while (head)
	{
		temp_ptr = head->next;
		free(head);
		head = temp_ptr;
	}
}
