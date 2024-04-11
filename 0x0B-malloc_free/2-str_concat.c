#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates two strings
 * @s1: first string to be concatinated
 * @s2: second string to be concatenated
 *
 * Return: pointer to concatenated string or NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1 = 0, len2 = 0;
	char *new_s;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	new_s = (char *)malloc(sizeof(char) * (len + 1));

	if (new_s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_s[i] = s1[i];

	}

	for (j = 0; j < len2; i++, j++)
	{
		new_s[i] = s2[j];
	}

	new_s[len] = '\0';
	return (new_s);
}
