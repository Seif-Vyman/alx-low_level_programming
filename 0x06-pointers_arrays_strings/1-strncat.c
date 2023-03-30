#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncat - print a  concatenates two strings
* @dest: pointer of string
* @src: pointer of string
* @n: number of bytes
* Return: return stract of dest and src
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, size = strlen(dest);

	for (i = size, j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
