#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - function fills the first n bytes of the memory area pointed to by s
* @s: pointer of array
* @c: char which will change
* Return: return the new array
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
