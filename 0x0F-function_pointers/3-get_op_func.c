#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the operation asked by the user.
 * @s: operator
 *
 * Return: result
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

	while (i < 5)
	{
		if (!(strcmp(ops[i].op, s)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
