#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - varadic function print sum
 * @separator: char of argu
 * @n: number of arg
 * Return: sum of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator)
			printf("%d%c", va_arg(op, int), *separator);
		else
			printf("%d", va_arg(op, int));
	}
	printf("\n");
}
