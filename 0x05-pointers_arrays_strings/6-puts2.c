#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - print a  char by char of string
* @str: pointer of string
*
*/
void puts2(char *str)
{
	int i, size = strlen(str);

	for (i = 0; i < size; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
