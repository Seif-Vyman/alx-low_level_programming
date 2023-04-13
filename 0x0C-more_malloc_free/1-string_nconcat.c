#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* string_nconcat - print a  concatenates two strings
* @s1: pointer of string
* @s2: pointer of string2
* @n: number of bytes
* Return: return copy for array
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int j, i, size1 = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = malloc(size1 + n + 1);

	if (x == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		x[i] = s2[j];
		i++;
	}

	x[i] = '\0';

	return (x);
}
