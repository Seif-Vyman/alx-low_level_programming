#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memcpy - function fills the first n bytes of the memory area pointed to by s
* @dest: pointer of array
* @src: char which will change
* @n: number of bytes
* Return: return the new array
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j = 0, x = strlen(dest);

	for (i = x; i < n + x; ++i)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
