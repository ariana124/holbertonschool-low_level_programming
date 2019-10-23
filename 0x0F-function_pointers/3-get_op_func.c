#include "calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: the operator passed as an argument to the program
 * Return: a pointer to the function that corresponds to the operator given as a
 * parameter
 */
int (*get_op_func(char *s))(int, int)
{
	
