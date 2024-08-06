#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at given location
 * @h: double pointer to head of the list
 * @idx: index where new node is to be inserted
 * @n: data at new node
 *
 * Return: address of new node or NULL upon failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	for (i = 0; current != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
	}

		return (NULL);
}
