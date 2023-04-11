#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: vector which have arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, cnt = 0;

	char *p;

	for (i = 0; i < argc; i++)
	{
		for (p = argv[i]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		cnt += atoi(argv[i]);
	}
	printf("%d\n", cnt);
	return (0);
}
