#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
*  array_iterator - function fills the first n bytes of the memory area
* @array: pointer of char
* @size: ponter of function
* @action: function that print chars
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; ++i)
			(*action)(*array++);
	}
}
