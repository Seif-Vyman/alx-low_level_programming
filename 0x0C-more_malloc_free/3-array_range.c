#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function make dynamic array
 * @min: pointer to string
 * @max:the largest number
 * Return: return pointer to array
 */
int *array_range(int min, int max)
{
	int *ans, i, j;

	if (min > max)
		return (NULL);
	ans = malloc((max - min + 1) * sizeof(int));
	if (ans == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; j++, i++)
	{
		*(ans + j) = i;
	}
	return (ans);
}
