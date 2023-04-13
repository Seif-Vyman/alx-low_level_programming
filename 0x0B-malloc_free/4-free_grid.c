#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* free_grid - print a  concatenates two strings
* @grid: pointer of string
* @height: number of rows
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
