#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function pinter
 * @s: pointer variable
 * Return: zero
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int o = 0;

	while (o < 5)
	{
		if (strcmp(s, ops[o].op) == 0)
			return (ops[o].f);
		o++;
	}
	return (0);
}
