#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string whose initial bytes are checked
 * @accept: string whose bytes are compared against
 *
 * Return: number of bytes in @s prefix matching with those in @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int char_num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				char_num++;
		}
	}
	return (char_num);
}
