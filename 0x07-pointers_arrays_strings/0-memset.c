#include "main.h"

/**
 * _memset - fills a memory space with a constant byte
 * @s: points to the memory space
 * @b: constant byte to fill the memory
 * @n: number of bytes of memory filled
 *
 * Return: pointer to memory space s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
