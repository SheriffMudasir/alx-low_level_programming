#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Perform the function selected
 * by the user.
 * @s: The argument passed aS OPERATOR.
 *
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL},
	};


int x = 0;


while (ops[x].op != NULL && *(ops[x].op) != *s)
	x++;


return (ops[x].f);
	}

