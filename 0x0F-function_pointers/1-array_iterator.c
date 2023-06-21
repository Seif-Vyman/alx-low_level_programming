#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function use pointer to print
 * @array: pointer to name
 * @size: pointer to function
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
