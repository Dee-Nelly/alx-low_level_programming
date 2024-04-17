#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ranging from min to max
 * @min: minimum number for the array elements
 * @max: maximum number for the array elements
 *
 * Return: if min > max or malloc fails - NULL, otherwise upon success -
 *		a pointer to the created array.
 */

int *array_range(int min, int max)
{
	int size, *array, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);

}
