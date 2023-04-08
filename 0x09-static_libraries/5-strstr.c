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
	int len1 = strlen(haystack);

	int i, len2 = strlen(needle);

	for (i = 0; i <= len1 - len2; i++)
	{
		int j;

		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == len2)
			return ((char *)&haystack[i]);
	}
	return ('\0');
}
