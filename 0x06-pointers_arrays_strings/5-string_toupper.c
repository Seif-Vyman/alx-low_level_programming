#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* string_toupper - print a  concatenates two strings
* @s: pointer of string
* Return: return string of dest and src
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if ('z' >= s[i] && s[i] >= 'a')
			s[i] = s[i] - 32;
	}
	return (s);
}
