#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*  _puts_recursion - function fills the first n bytes of the memory area
* @s: pointer of char
* _putchar - function that print chars
*/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
