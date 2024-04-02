#include "main.h"
#include <stdlib.h>
#include<stddef.h>

/**
 * create_array - creates an array using dynamic memory allocation
 * @size: size of the array
 * @c: character that initialises array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	array = malloc(size);

	if (size == 0)
		return (NULL);
	else if (array == NULL)
		return (NULL);
	while (size--)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
