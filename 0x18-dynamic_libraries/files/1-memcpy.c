#include "main.h"

/**
 * _memcpy - copies bytes from memory area
 * @src: memory area bytes are copied from
 * @dest: destination memory are
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j  < n; j++)
		dest[j] = src[j];
	return (dest);
}
