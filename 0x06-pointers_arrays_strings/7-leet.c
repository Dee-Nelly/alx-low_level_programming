#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char *enc = "aAeEoOtTlL";
	char *dec = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == enc[j])
				s[i] = dec[j];
		}
	}
	return (s);
}
