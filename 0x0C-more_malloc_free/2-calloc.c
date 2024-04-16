#include "main.h"
#include <stdlib.h>

/**
 * _calloc - assigns memory for an array
 * @nmemb: elements of the array
 * @size: byte size of the elements of the array
 * Return: pointer to the array memory otherwise NULL if
 * nmemb or size are zero or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	fill = array;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (array);

}
