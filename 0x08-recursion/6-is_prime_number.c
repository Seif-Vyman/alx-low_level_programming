#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* is_prime_number - function fills the first n bytes of the memory area
* prime - function fills the first n bytes of the memory area
* @n: integer for base
* Return: return factorial of n
* _putchar - function that print chars
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
/**
* prime - function fills the first n bytes of the memory area
* @n: integer for base
* @i: number for prime
* Return: return factorial of n
* _putchar - function that print chars
*/
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime(n, i - 1));
}
