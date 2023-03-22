#include "main.h"

/**
 * print_last_digit - take a number c and return the last digit  of c
 *  @c: takes input from other functions.
 *
 * Return: the last digit of c
 */

int print_last_digit(int c)
{
	int i;
	if (c < 0)
		i = -1 * (c % 10);
	else
		i = c % 10;

	_putchar('0' + i);

	return (i);
}
