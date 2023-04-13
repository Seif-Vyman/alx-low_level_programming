#include "main.h"
#include <stdlib.h>

/**
* _calloc - return array with zeros by malloc
* @nmemb: size of array
* @size: size of data type
* Return: return array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i, n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(n);
	if (x == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		x[i] = 0;
	return (x);
}
