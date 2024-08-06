#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly
 * linked list
 * @head: pointer to head of the list
 * @n: integer stored at new node
 *
 * Return: address of new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_ptr, *current_ptr;

	current_ptr = *head;

	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->n = n;
	new_ptr->next = NULL;
	if (*head == NULL)
	{
		new_ptr->prev = NULL;
		*head = new_ptr;
	}
	else
	{
		while (current_ptr->next)
			current_ptr = current_ptr->next;
		new_ptr->prev = current_ptr;
		current_ptr->next = new_ptr;
	}

	return (new_ptr);
}
