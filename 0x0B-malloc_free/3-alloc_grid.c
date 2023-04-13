#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* alloc_grid - print a  concatenates two strings
* @width: pointer of string
* @height: number of rows
* Return: return copy for array
*/
int **alloc_grid(int width, int height)
{
	int i, j, **arr = (int **)malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
