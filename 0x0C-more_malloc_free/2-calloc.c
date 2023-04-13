#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _calloc - print a  concatenates two strings
* @nmemb: pointer of string
* @size: pointer of string2
* Return: return copy for array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		x[i] = 0;
	return (x);
}
