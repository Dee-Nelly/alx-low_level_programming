#include <stdio.h>

/**
 * print_first - prints something before main is executed
 *
 */

void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
