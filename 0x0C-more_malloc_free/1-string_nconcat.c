#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - joins together 1 string and the first n bytes of
 *		another string
 *@s1: first string argument
 *@s2: second string whose n bytes are copied
 *@n: number of bytes of s2 copied
 *Return: a pointer to the new string and NULL upon failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int i, j, len1, len2;

	i = j = len1 = len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
	{
		new_s = malloc(sizeof(char) * (len1 + n + 1));
	}

	else
		new_s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_s == NULL)
		return (NULL);

	while (i < len1)
	{
		new_s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		new_s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		new_s[i++] = s2[j++];

	new_s[i] = '\0';
	return (new_s);
}
