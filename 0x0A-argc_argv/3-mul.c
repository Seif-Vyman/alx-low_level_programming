#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - function print words by recursion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 always
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
