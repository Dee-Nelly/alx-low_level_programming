#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of a programme
 * @argc: size of the argument vector
 * @argv: the argument vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
