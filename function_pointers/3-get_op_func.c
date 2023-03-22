#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - chechs if @s is a valid option.
 * @s: byte.
 * Return: A pointer to chossen function, 0 if fails.
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
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (0);
}
