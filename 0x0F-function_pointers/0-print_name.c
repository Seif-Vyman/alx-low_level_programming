#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
*  print_name - function fills the first n bytes of the memory area
* @name: pointer of char
* @f: ponter of function
* _putchar - function that print chars
*/
void print_name(char *name, void (*f)(char *))
{
	void (**ans)(char *) = &f;

	(*ans)(name);
}
