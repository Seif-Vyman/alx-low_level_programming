#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strspn - function fills the first n bytes of the memory area pointed to by s
* @s: pointer of array
* @accept: char which will change
* Return: return the new array
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		unsigned int b = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b = 1;
				break;
			}
		}
		if (b == 1)
			cnt++;
		else
			return (cnt);
	}
	return (cnt);
}
