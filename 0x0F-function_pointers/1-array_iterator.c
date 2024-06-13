#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *			on each element of an array
 *@array: the array to operate on
 *@size: size of the array
 *@action: function pointer pointing to the function being executed
 *		on each element of the array
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || action == 0)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
