#include <stdio.h>
#include "main.h"

/**
 * main - main
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
