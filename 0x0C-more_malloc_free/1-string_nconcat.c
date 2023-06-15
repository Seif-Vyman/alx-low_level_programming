#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function make dynamic array
 * @s1: pointer to string
 * @s2: pointer to another string
 * @n: number of chars
 * Return: return pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1 = 0, size2 = 0;
	char *ans;

	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	if (size2 > n)
		ans = malloc((size1 + n) * sizeof(char) + 1);
	else
	{
		ans = malloc((size1 + size2) * sizeof(char) + 1);
		n = size2;
	}
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		*(ans + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(ans + i) = *(s2 + j);

	*(ans + i) = '\0';
	return (ans);
}

	
