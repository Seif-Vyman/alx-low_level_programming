#include "main.h"

/**
 * print_sign - checks if charcter is a positive number or zero or negative
 *
 *  @c: takes input from other functions.
 *
 * Return: + and 1 if c positive  or  0 and 0 if number is 0 else - and -1
 */

int print_sign(int c)
{
	if (c >= 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
