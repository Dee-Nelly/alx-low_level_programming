#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list
 * @h: a constants pointer to a list_t structure
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
