#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* reverse_array - print a  concatenates two strings
* @a: pointer of string
* @n: number of bytes
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; ++i)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
