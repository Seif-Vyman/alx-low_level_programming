#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _strdup - print a  concatenates two strings
* @str: pointer of string
* Return: return copy for array
*/
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];

	return (m);
}
