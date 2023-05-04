#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
* binary_to_uint - convert binary to decimal
* @b: pointer of char
* Return: return decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, ans = 0, size = strlen(b);

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		ans = ans * 2 + (*b++ - '0');

	}
	return (ans);
}
