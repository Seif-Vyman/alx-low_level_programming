#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncpy - print a  concatenates two strings
* @dest: pointer of string
* @src: pointer of string
* @n: number of bytes
* Return: return stract of dest and src
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
