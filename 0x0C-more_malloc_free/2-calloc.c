#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function make dynamic array
 * @nmemb: pointer to string
 * @size: size of memory
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ans;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ans = malloc(size * nmemb);
	if (ans == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
		ans[i] = 0;
	return (ans);
}
