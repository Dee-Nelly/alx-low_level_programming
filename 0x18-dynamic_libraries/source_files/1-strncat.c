#include "main.h"

/**
 * _strncat - concatenates two strings copying n bytes from
 *		the second string
 * @dest: destination string
 * @src: string copied to dest
 * @n: number of bytes copied from src to dest
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
