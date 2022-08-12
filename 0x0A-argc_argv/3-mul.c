#include <stdio.h>

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
			for (j = 0; j < 1; j++)
			{
				res *= argv[i][j] - '0';
			}
		}
		printf("%d\n", res);
		retunr (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
