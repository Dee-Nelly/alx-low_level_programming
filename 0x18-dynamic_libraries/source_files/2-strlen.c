#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: string in question
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
