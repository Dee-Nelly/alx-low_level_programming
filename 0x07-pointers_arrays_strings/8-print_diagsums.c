#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals
 *			of a square matrix
 * @a: the square matrix
 * @size: the size of the square matrix
 *
 * Returns: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum_1 = 0;
	int sum_2 = 0;

	while (i <= (size * size))
		{
			sum_1 += a[i];
			i = i + size + 1;
		}
	while (j < (size * size) - 1)
		{
			sum_2 += a[j];
			j = j + (size - 1);
		}
	printf("%d, %d\n", sum_1, sum_2);
}
