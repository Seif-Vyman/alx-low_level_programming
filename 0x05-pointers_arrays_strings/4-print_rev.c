#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print a reverse of string by funtcion strrev
* @s: pointer of string
*
*/
void print_rev(char *s)
{
	int n, i;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
