#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - chooses a function to perform an
 *		an operation selected by the user
 *@s: operator that is selected
 *Return: a pointer to the function selected as the operator by the user
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}

