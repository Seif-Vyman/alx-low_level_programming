#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - print a  concatenates two strings
* @s1: pointer of string
* @s2: pointer of string
* Return: return def of two strings
*/
int _strcmp(char *s1, char *s2)
{
	int i, size = strlen(s1);

	for (i = 0; i < size; ++i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
