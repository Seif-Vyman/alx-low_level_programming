#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _sqrt_recursion - function fills the first n bytes of the memory area
* @n: integer for base
* Return: return factorial of n
* _putchar - function that print chars
*/
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
* square - function fills the first n bytes of the memory area
* @x: integer for base
* @n: integer for power
* Return: return factorial of n
* _putchar - function that print chars
*/
int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
