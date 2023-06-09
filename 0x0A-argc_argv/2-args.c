#include <stdio.h>

/**
 * main - function print words by recursion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
