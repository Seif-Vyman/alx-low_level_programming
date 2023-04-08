#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memset - function fills the first n bytes of the memory area pointed to by s
* @s: pointer of array
* @b: char which will change
* @n: number of bytes
* Return: return the new array
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
