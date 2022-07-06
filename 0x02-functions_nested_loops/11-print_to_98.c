#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: para
 * @n greater: para 1
 * @n less: para 2
 * Return: 0 always
 */

void greater(int n);
void less(int n);

void print_to_98(int n)
{
	if (n > 98)
		greater(n);
	else
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
	printf("%c", '\n');
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
	printf("%c", '\n');
}
