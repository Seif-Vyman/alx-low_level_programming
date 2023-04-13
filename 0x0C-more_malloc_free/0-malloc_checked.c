#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* malloc_checked - print a  concatenates two strings
* @b: number of bytes
* Return: return copy for array
*/
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
