#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbe rof argumenets passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
