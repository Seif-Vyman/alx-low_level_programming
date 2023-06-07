#include "main.h"

/**
 * factorial - function print words by recursion
 * @n: number we get the factorial
 * Return: return factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
