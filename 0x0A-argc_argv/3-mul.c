#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiple of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 is success and 1 if error
 */

int main(int argc, char **argv)
{
	char err_msg[] = "Error";
	int mul = 0;

	if (argc != 3)
	{
		printf("%s\n", err_msg);
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
