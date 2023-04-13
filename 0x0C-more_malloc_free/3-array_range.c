#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* array_range - print a  concatenates two strings
* @min: pointer of string
* @max: pointer of string2
* Return: return copy for array
*/
int *array_range(int min, int max)
{
	int *x, i;

	if (min > max)
		return (NULL);
	x = malloc((max - min + 1) * sizeof(int));
	if (x == 0)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		x[i] = min;
	return (x);
}
