#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - adds two integers
 * @a: first integer in the addition
 * @b: second integer in the addition
 *Return: the answer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts one integer from another
 * @a: integer to subtract from
 * @b: integer subtracted
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 * @a: first integer in the multiplication
 * @b: second integer in the multiplication
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 * @a: quotient
 * @b: divisor
 * Return: answer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - gives the modulo of two integers
 * @a: first integer
 * @b: second integer
 * Return: the modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
