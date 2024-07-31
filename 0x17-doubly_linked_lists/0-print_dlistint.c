#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list.
 * @h: pointer to head of the list
 *
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t tot_nodes = 0;

	while (h != NULL)
	{
		tot_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (tot_nodes);
}
