#include "main.h"

/**
*_islower - checks whether a character is lower case
*@c: the argument/ character being checked
* Return: 1 if character is lower case, else 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
