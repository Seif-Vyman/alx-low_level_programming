#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _realloc - print a  concatenates two strings
* @ptr: pointer of string
* @old_size: pointer of string2
* @new_size: number of new bytes
* Return: return copy for array
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	if (new_size > old_size)
		return (ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		return (ptr = malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);
}
