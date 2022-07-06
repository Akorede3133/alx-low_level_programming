#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: para
 * Return: 0 always
 */

void print_to_98(int n)
{
	greater(n);
	less(n);
}
void greater(int n)
{
	int i;

	for (i = n; i >= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf("%c%c", ',', ' ');
		}
	}
}

void less(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf("%c%c", ',', ' ');
	}
}
