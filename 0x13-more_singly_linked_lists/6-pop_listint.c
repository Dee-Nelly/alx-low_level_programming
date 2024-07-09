#include "lists.h"

/**
 * pop_listint - deletes the head node of a 'listint_t' and
 *		returns the head node data
 *@head: double pointer pointing to the head node
 *
 * Return: 0 if linked list is empty and the head node data if not
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_n = 0;

	if (*head)
	{
		data_n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (data_n);
}
