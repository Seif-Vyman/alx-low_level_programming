#include "main.h"

/**
 * print_alphabet x10 utilizes on tthe _putchar function to print
 *      the alphabet a-z x10
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
