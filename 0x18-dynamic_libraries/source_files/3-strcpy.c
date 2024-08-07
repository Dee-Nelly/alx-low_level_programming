#include "main.h"
/**
 * *_strcpy - copies the string pointer to by src to the temporary storage
 *		pointed to by dest.
 * @dest: pointer to buffer to which the string is copied
 * @src: string that is copied to dest
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, size;

	size = 0;

	while (src[size] != '\0')
		size++;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
