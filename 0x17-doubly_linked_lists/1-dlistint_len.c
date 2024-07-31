#include "lists.h"

/**
 * dlistint_len - counts number of elements of a doubly linked list.
 * @h: pointer to head of the list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t tot_nodes = 0;

	while (h != NULL)
	{
		tot_nodes++;
		h = h->next;
	}

	return (tot_nodes);
}
