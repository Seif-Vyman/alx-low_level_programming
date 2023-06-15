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
	int *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);

}
