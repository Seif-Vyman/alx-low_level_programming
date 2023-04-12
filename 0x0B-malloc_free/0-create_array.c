#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* create_array - print a  concatenates two strings
* @size: pointer of string
* @c: number of bytes
* Return: return copy for array
*/
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);
	while (size--)
		x[size] = c;
	return (x);
}
