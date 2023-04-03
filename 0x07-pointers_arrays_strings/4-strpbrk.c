#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strpbrk - function fills the first n bytes of the memory area
* @s: pointer of array
* @accept: char which will change
* Return: return the new array
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0' ; ++i)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return (NULL);
}
