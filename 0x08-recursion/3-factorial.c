#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* factorial - function fills the first n bytes of the memory area
* @n: integer for factorial
* Return: return factorial of n
* _putchar - function that print chars
*/
int factorial(int n)
{
	if (n > 0)
	{
		if (n == 1)
			return (1);
		return (n * (factorial(n - 1)));
	}

	else
	{
		return (-1);
	}
}
