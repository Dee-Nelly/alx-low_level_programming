#include "main.h"

/**
 *_isalpha - checks whether a character is a letter
 *@c: argument to be checked
 *
 * Return: 1 if character is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
