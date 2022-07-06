#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: para
 * @g: para 1
 * @l: para 2
 * Return: 0 always
 */

void greater(int g);
void less(int l);

void print_to_98(int n)
{
	if (n > 98)
		greater(n);
	else
		less(n);
}
void greater(int g)
{
	int i;

	for (i = g; i >= 98; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf("%c%c", ',', ' ');
		}
	}
	printf("%c", '\n');
}

void less(int l)
{
	int i;

	for (i = l; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf("%c%c", ',', ' ');
	}
	printf("%c", '\n');
}
