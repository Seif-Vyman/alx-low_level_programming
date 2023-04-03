#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strstr - function fills the first n bytes of the memory area
* @haystack: pointer of array
* @needle: char which will change
* Return: return the new array
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
