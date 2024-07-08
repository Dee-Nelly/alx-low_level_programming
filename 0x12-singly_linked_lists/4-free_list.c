#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the elements of a linked list
 * @head: a pointer to the head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
