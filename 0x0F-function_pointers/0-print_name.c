#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function use pointer to print
 * @name: pointer to name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
