#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function use pointer to print
 * @array: pointer to name
 * @size: pointer to function
 * @cmp: pointer to function
 * Return: return index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
		return (-1);
	}
	else
		return (-1);
}
