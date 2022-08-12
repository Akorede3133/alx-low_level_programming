#include <stdio.h>
/**
 * main - main
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
