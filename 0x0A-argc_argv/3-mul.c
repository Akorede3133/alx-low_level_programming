#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 * @argc - count
 * @argv - argv
 * Return: int
 */


int main(int argc, char *argv[])
{
	int i, j, res = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
