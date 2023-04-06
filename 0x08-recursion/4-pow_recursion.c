#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _pow_recursion - function fills the first n bytes of the memory area
* @x: integer for base
* @y: integer for power
* Return: return factorial of n
* _putchar - function that print chars
*/
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		else
			return (x * (_pow_recursion(x, y - 1)));
	}
	else
		return (-1);
}
