#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_chessboard - function fills the first n bytes of the memory area
* @a: pointer of array
* _putchar - print characters from another file
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			_putchar(a[i][j]);
		}
		if (i != 7)
			_putchar('\n');
	}
}
