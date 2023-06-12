#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function make dynamic array
 * @size: size of array
 * @c: char will write
 * Return: return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size)
	{
		s = malloc((sizeof(char) * size) + 1);
		if (s)
		{
			while (i < size)
			{
				s[i] = c;
				i++;
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
