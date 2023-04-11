#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: vector which have arguments
 * atoi - function convert string to digit
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int ans;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ans = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", ans);
	}
	return (0);
}
