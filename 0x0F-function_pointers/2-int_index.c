#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
*  int_index - function fills the first n bytes of the memory area
* @array: pointer of char
* @size: ponter of function
* @cmp: pointer of function
* Return: return the index
* _putchar - function that print chars
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; ++i)
		{
			if ((*cmp)(*array++))
				return (i);
		}
		return (-1);
	}
	return ('\0');
}
