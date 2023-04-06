#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*  _print_rev_recursion - function fills the first n bytes of the memory area
* @s: pointer of char
* _putchar - function that print chars
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	_putchar(*s);
}
