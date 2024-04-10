#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string and returns  a pointer to that string
 *		from a memory space allocated by malloc and cleared by free
 *@str: string to be duplicated
 *
 * Return: pointer to duplicated string and NULL upon failure
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dupe;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupe = (char *)malloc((sizeof(char) * len) + 1);
	if (dupe == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dupe[i] = str[i];
	}
	dupe[len] = '\0';
	return (dupe);
}
