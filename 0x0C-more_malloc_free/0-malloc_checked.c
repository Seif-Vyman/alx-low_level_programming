#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function make dynamic array
 * @b: pointer to string
 * Return: pointer of memory
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	if(!b)
		exit(98);
	s = malloc(b);
	if (!s)
		exit(98);

	return (s);

}
