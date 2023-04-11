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
	int cnt = 0;

	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		cnt += atoi(argv[argc]);
	}
	printf("%d\n", cnt);
	return (0);
}
