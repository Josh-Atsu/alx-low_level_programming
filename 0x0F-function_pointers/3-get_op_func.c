#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the right function to perform the operation selected by the user
 * @s: the operator passed
 * Return: a pointer to the function that corresponds to the operator given
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
	int  i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
		i++;
	}
	return (0);
}
