#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function make dynamic array
 * @str: pointer to string
 * Return: return pointer to array
 */
char *_strdup(char *str)
{
	if (str)
	{
		char *s;
		int i = 0, size = strlen(str);

		s = malloc(size * sizeof(char));
		if (s)
		{
			while (i < size)
			{
				s[i] = *str;
				i++;
				str++;
			}
			s[i] = '\0';
			return (s);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
