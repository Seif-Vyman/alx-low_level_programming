#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - varadic function print sum
 * @separator: char of argu
 * @n: number of arg
 * @...: the string to print
 * Return: sum of numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;

	char *str;

	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i--)
		printf("%s%s", (str = va_arg(op, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(op);
}
