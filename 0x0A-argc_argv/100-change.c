#include <stdio.h>
#include <stdlib.h>
/**
 * main - function print words by recursion
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return 0 always
 */
int main(int argc, char *argv[])
{
	int cnt = 0, i, cent, values[5] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cent)
	{
		for (i = 0; i < 5; i++)
		{
			if (cent >= values[i])
			{
				cent -= values[i];
				cnt++;
				break;
			}
		}
	}
	printf("%d\n", cnt);
	return (0);
}
