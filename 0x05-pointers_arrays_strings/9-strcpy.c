#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed to by @src, including the
 *           terminating null byte(\0) to the buffer pointed to by @dest.
 * @dest: pointer to the buffer to copy the string to.
 * @src: The string to copy
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, size = strlen(src);

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
