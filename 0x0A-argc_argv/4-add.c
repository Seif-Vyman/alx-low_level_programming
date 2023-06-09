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

	if (argc >= 2)
	{
		int ans = 0, i;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) % 1 == 0 && atoi(argv[i]) != 0)
				ans += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", ans);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
