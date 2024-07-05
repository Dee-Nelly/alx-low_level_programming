#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_s - a singly linked list
 * @str: string initialised using malloc
 * @len: the leghth of the string
 * @next: a pointer to the next node of the same type as the struct list_s
 *
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
