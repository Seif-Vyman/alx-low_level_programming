#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function print words by recursion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 always
 */

int main(int argc, char *argv[])
{
	int is_digit = 1, i;

	if (argc >= 3)
	{
		for (i = 1; i < 3; i++)
		{
			if (strspn(argv[i], "0123456789") != strlen(argv[i]))
				is_digit = 0;
		}
		if (is_digit)
		{
			printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		}
		else{
			return (1);
		}
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
