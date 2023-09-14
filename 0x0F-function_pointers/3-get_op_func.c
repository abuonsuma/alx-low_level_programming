#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  *get_op_func - function selects the correct function to perform operation
  *@s: argument operator
  *Return: correct function result is successful and NULL if not
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
	int q;

	q = 0;
	while (q < 5)
	{
		if (s[0] == ops[q].op[0])
		{
			return (ops[q].f);
		}
		q++;
	}
	return (NULL);
}
