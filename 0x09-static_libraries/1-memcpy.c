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
	char *d = dest, *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
