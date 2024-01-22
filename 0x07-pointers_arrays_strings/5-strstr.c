#include "main.h"

/**
 * _strstr - prints consecutive characters of sring 1 that are in string 2
 * @haystack: source string (string 1)
 * @needle: searching string (string 2)
 *
 * Return: pointer to beginnig of substring in @haystack
 *	otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (haystack[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);

		}
		haystack++;
	}
	return ('\0');
}
