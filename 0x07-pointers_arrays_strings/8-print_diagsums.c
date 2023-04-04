#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_diagsums - function fills the first n bytes of the memory area
* @a: pointer of array
* @size: size of array
* printf - function print what i want to print
*/
void print_diagsums(int *a, int size)
{
	int i, c = 0, b = 0;

	for (i = 0; i < size; ++i)
	{
		c += a[i];
		b += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", b);
}
