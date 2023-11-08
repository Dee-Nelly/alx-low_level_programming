#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the array
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, last_char;

	last_char = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		int begin, end;

		begin = a[i];
		end = a[last_char];
		a[i] = end;
		a[last_char] = begin;
		last_char--;
	}
}
