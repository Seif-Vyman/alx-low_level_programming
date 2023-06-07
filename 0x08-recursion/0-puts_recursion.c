#include "main.h"

/**
 * _puts_recursion - function print words by recursion
 * @s: pointer to word
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
