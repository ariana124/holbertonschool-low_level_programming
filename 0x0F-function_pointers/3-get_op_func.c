#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: the operator passed as an argument to the program
 * Return: a pointer to the function that corresponds to the operator given as
 * a parameter
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

	while (ops[i].op) /* while ops[i] contains a valid character */
	{
		if (*ops[i].op == *s && s[1] == '\0') /* op the user inputs */
			return (ops[i].f); /* returns the op function */
		i++;
	}
	return (NULL);
}
