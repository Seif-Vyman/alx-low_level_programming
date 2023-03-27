#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - print a reverse of string by funtcion strrev
* @s: pointer of string
*
*/
void rev_string(char *s)
{
	int tmp, i, size = strlen(s) - 1;

	for (i = 0; i < size; ++i)
	{
		tmp = s[i];
		s[i] = s[size];
		s[size] = tmp;
		size--;
	}
}
