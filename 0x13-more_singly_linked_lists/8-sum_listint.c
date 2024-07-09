#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: pointer to head node
 *
 * Return: sum of all the data (n) of a 'listint_t' list or 0 if empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
