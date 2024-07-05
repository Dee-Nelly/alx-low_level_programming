#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the contents of a list
 * @h: a pointer of type list_t
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
