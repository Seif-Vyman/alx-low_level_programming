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
	unsigned int i = n;

	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i--)
		printf("%d%s", va_arg(op, int), i ? (separator ? separator : "") : "\n");
	va_end(op);
}
