#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - print the end half of string
* @str: pointer of string
*
*/
void puts_half(char *str)
{
	int i, size = strlen(str);

	if (size % 2 == 0)
	{
		for (i = size / 2; i < size; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
	else
	{
		for (i = (size - 1) / 2; i < size; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}
