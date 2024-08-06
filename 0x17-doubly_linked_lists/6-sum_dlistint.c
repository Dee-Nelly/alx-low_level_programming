#include "lists.h"

/**
 * sum_dlistint - calculates the sum of the n data parts of a list
 * @head: pointer to head of the list
 *
 * Return: sum of all data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
