#include "main.h"

/**
 * _strpbrk - locates bytes in a string matching those in another string
 * @s: string whose bytes are checked
 * @accept: string whose bytes are compred against @s
 *
 * Return: pointer to first occurrence of byte in @accept matching byte
 *	in @s, otherwise NULL if no such byte exists
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
